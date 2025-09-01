; Comments
(comment) @comment

; Variable names (keys)
(variable
  name: (identifier) @variable.parameter)

; String values
(string_double) @string.quoted.double
(string_single) @string.quoted.single
(raw_value) @string.unquoted

; Primitive types
(bool) @constant.builtin.boolean
(integer) @constant.numeric.integer

; Interpolation
(interpolation_simple
  name: (identifier) @variable.special)

(interpolation_default
  name: (identifier) @variable.special
  default: (interpolation_value) @string)

(interpolation_short
  name: (identifier) @variable.special)

; Escape sequences (only in double-quoted strings)
(string_double (escape_sequence) @constant.character.escape)

; Operators
"=" @operator
"${" @punctuation.special
"}" @punctuation.special
"$" @punctuation.special