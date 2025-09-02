# Phase 6 Float Highlighting Debug

## Issue Summary
Floats are being parsed correctly by tree-sitter but not highlighted as orange in Zed.

## Observations from User

### Incorrectly White (Should be Orange):
- All floats in BASIC DECIMALS section: `3.14`, `0.5`, `-2.718`, `.5`, `42.`
- All floats in SCIENTIFIC NOTATION section: `1.23e-4`, `6.022E23`, `1e10`
- All floats in WITH SPACING section

### Other Observations:
1. **IP Address `192.168.1.1`**: 
   - `192.168.` is white (correct - raw_value)
   - Final `1`s are orange (incorrect - being parsed as integers)

2. **Hex `0xFF`**:
   - `0` is orange (parsed as integer)
   - `xFF` is red (parsed as identifier/key)

3. **Standalone identifiers**:
   - `e10` is green (should be white)
   - `E23` is green (should be white)

4. **Other values showing green instead of white**:
   - `.` (single dot)
   - `v3.14`
   - `$99.99`
   - `abc123`

## Analysis

The green color for raw values suggests they might be matching a different highlight rule. In our highlights.scm:
- `(raw_value) @string.unquoted`

The fact that these are showing green (typically string color) instead of white suggests:
1. The `@string.unquoted` highlight might be mapping to green in this theme
2. Float patterns are not being matched by the lexer in Zed

## Potential Issues

1. **Lexer Conflict**: Tree-sitter's lexing might work differently in Zed vs command line
2. **Highlight Mapping**: `@constant.numeric.float` might not be mapped to orange in Zed
3. **Grammar Loading**: Zed might not be loading the updated grammar correctly

## Next Steps

1. Try explicitly testing a simple float to isolate the issue
2. Check if booleans and integers are highlighting correctly (they should be orange)
3. Consider if we need to adjust the grammar structure or highlighting queries