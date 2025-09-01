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

    comment: ($) => token(seq("#", /.*/)),

    variable: ($) =>
      seq(
        field("name", $.identifier), 
        token.immediate("="), 
        field("value", optional(alias(token.immediate(/[^\n\r]*/), $.value)))
      ),
    
    value: ($) => alias($.raw_value, $.raw_value),


    interpolated_variable: ($) =>
      choice(
        seq("$", $.identifier),
        seq("${", $.identifier, "}"),
        seq("${", $.identifier, ":-", $.identifier, "}"),
        seq("$(", $.shell_command, ")"),
      ),

    shell_command: ($) => /[^$()]+/,

    identifier: ($) => choice(
      /[a-zA-Z_][a-zA-Z0-9_-]*/,
      seq('@', /[a-zA-Z0-9_-]+/, ':', /[a-zA-Z0-9_-]+/)
    ),


    bool: ($) => choice("true", "false"),

    integer: ($) => /\d+/,

    string_interpolated: ($) =>
      seq('"', repeat(choice($._interpolated_content, $.escape_sequence)), '"'),

    _interpolated_content: ($) => choice(/[^"$\\]+/, $.interpolated_variable),

    string_literal: ($) =>
      seq("'", repeat(choice(/[^'\\]+/, $.escape_sequence)), "'"),

    escape_sequence: ($) => token(seq("\\", /[nrtfb"'\$\\]/)),

    url: ($) =>
      token(
        seq(
          /https?:\/\//,
          /[a-zA-Z0-9.-]+/,
          optional(seq(":", /\d+/)),
          optional(seq("/", /[^\s#]*/)),
          optional(seq("#", /[^\s]*/)),
        ),
      ),

    raw_value: ($) => token.immediate(prec(-1, /[^\n\r]+/)),
  },
});
