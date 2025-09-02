; Comments
(comment) @comment

; Variable names (keys)
(variable
  name: (identifier) @variable.parameter)

; Primitive types (higher precedence)
(bool) @constant.builtin.boolean
(float) @constant.numeric.float
(integer) @constant.numeric.integer

; String values
(string_double) @string.quoted.double
(string_single) @string.quoted.single
; (raw_value) @string.unquoted  ; Commented out - let raw values have no highlight

; URLs and URIs
(url) @string.special.url
(uri) @string.special.url

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