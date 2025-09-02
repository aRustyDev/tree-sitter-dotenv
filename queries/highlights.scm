; Comments
(comment) @comment

; Variable names (keys)
(variable
  name: (identifier) @variable)

; Primitive types (higher precedence)
(bool) @boolean
(float) @number
(integer) @number

; String values
(string_double) @string
(string_single) @string
; (raw_value) @string  ; Commented out - let raw values have no highlight

; URLs and URIs
(url) @string.special
(uri) @string.special

; Interpolation
(interpolation_simple
  name: (identifier) @variable)

(interpolation_default
  name: (identifier) @variable
  default: (interpolation_value) @string)

(interpolation_short
  name: (identifier) @variable)

; Escape sequences (only in double-quoted strings)
(string_double (escape_sequence) @string.escape)

; Operators
"=" @operator
"${" @punctuation.bracket
"}" @punctuation.bracket
"$" @punctuation.special