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
        optional($._spacing),  // Allow "key = value"
        "=",
        optional($._spacing),  // Allow "key= value" or "key = value"
        field("value", optional($._value))
      ),
    
    // Hidden rule for optional spacing
    _spacing: ($) => /[ \t]*/,
    
    // Value types with precedence: strings > raw
    _value: ($) => choice(
      $.string_double,
      $.string_single,
      $.raw_value
    ),
    
    // Raw value captures anything else (lowest precedence)
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
      /[a-zA-Z_][a-zA-Z0-9_-]*/,
      seq('@', /[a-zA-Z0-9_-]+/, ':', /[a-zA-Z0-9_-]+/)
    ),


    // Unused rules to be integrated in later phases
    // bool: ($) => choice("true", "false"),
    // integer: ($) => /\d+/,
    // url: ($) => token(seq(/https?:\/\//, /[a-zA-Z0-9.-]+/, optional(seq(":", /\d+/)), optional(seq("/", /[^\s#]*/)), optional(seq("#", /[^\s]*/)))),
  },
});
