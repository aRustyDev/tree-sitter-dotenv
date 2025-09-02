const NEWLINE = /\r?\n/;

module.exports = grammar({
  name: "env",

  extras: ($) => [/[ \t]/],

  rules: {
    source_file: ($) => repeat($._line),

    _line: ($) => choice(
      $.comment,
      $.variable,
      /\r?\n/
    ),

    comment: ($) => token(prec(1, seq("#", /.*/))),

    variable: ($) =>
      seq(
        field("name", $.identifier),
        token("="),
        field("value", optional($._value))
      ),
    
    // Hidden rule for optional spacing
    _spacing: ($) => /[ \t]*/,
    
    // Value types with precedence: strings > bool > float > integer > uri > url > raw
    _value: ($) => choice(
      $.string_double,
      $.string_single,
      $.bool,
      $.float,
      $.integer,
      $.uri,
      $.url,
      $.raw_value
    ),
    
    // Raw value captures anything else
    raw_value: ($) => /[^"'\n\r][^\n\r]*/,
    
    // Double-quoted strings with interpolation and escapes
    string_double: ($) => 
      seq(
        '"',
        repeat(choice(
          $.escape_sequence,
          $.interpolation,
          /[^"$\\\\]+/
        )),
        '"'
      ),
    
    // Single-quoted strings (no interpolation, no escape sequences - literal)
    string_single: ($) =>
      seq(
        "'",
        repeat(/[^']+/),
        "'"
      ),
      
    // Interpolation patterns (only in double quotes)
    interpolation: ($) => choice(
      $.interpolation_default,
      $.interpolation_simple,
      $.interpolation_short
    ),
    
    interpolation_default: ($) => 
      prec.right(seq(
        '${', 
        field('name', $.identifier), 
        token(seq(':', '-')), 
        field('default', $.interpolation_value), 
        '}'
      )),
      
    interpolation_simple: ($) =>
      seq('${', field('name', $.identifier), '}'),
      
    interpolation_short: ($) =>
      seq('$', field('name', $.identifier)),
    
    // Values allowed in interpolation defaults
    interpolation_value: ($) => /[^}]+/,

    // Escape sequences
    escape_sequence: ($) => /\\./,

    identifier: ($) => choice(
      /[a-zA-Z_][a-zA-Z0-9_.-]*/,
      seq('@', /[a-zA-Z0-9_-]+/, ':', /[a-zA-Z0-9_-]+/)
    ),

    // Primitive types
    bool: ($) => token(prec(2, choice(
      'true',
      'false'
    ))),

    integer: ($) => token(prec(1, /[+-]?\d+/)),

    // Float/decimal numbers with scientific notation
    float: ($) => token(prec(10, choice(
      // Standard decimal notation: 3.14, 0.5, -2.718, .5, 42.
      seq(
        optional(choice('+', '-')),
        choice(
          seq(/\d+/, '.', /\d*/),  // 3.14 or 42.
          seq(/\d*/, '.', /\d+/)   // .5 or 0.5
        )
      ),
      // Scientific notation: 1.23e-4, 6.022E23, 1e10
      seq(
        optional(choice('+', '-')),
        /\d+/,
        optional(seq('.', /\d+/)),
        /[eE]/,
        optional(choice('+', '-')),
        /\d+/
      )
    ))),

    // Simple URL for common http(s) cases
    url: ($) => token(prec(3, seq(
      /https?:\/\//,
      // Optional userinfo (user:pass@)
      optional(seq(/[a-zA-Z0-9._~!$&'()*+,;=:-]+/, '@')),
      // Host
      /[a-zA-Z0-9.-]+/,
      // Optional port
      optional(seq(':', /\d+/)),
      // Optional path
      optional(/\/[^\s#,]*/),
      // Optional fragment
      optional(seq('#', /[^\s,]*/))
    ))),

    // Generic URI for other schemes
    uri: ($) => token(prec(2, seq(
      choice(
        // Web protocols
        /https?:\/\//,
        /wss?:\/\//,
        // Database protocols
        /postgres(ql)?:\/\//,
        /mysql:\/\//,
        /mongodb:\/\//,
        /redis:\/\//,
        seq('jdbc:', choice('mysql', 'postgresql', 'sqlite'), '://'),
        // File protocols
        /file:\/\//,
        /ftps?:\/\//,
        /sftp:\/\//,
        // VCS protocols
        /git(\+https?|\+ssh)?:\/\//,
        /ssh:\/\//,
        // Messaging
        /amqps?:\/\//,
        /mqtt:\/\//,
        /kafka:\/\//,
        // Cloud storage
        /s3:\/\//,
        /gs:\/\//,
        /azure:\/\//,
        // Other schemes (without ://)
        /mailto:/,
        /data:/,
        /ldaps?:\/\//,
        /urn:/
      ),
      // Rest of URI (exclude comma for list contexts)
      /[^\s,]+/
    ))),
  },
});
