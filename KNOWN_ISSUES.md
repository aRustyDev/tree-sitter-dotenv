# Known Issues and Limitations

## Inline Comments

**Issue**: Comments placed after values on the same line are parsed as part of the value rather than as separate comment nodes.

**Example**:
```bash
# This works correctly - comment on its own line
KEY=value

# This has limited support - comment is parsed as part of value
KEY=value # this comment becomes part of the value

# Test scenario from phase1-verification.env line 29
VALUE=something # This is an inline comment
# Result: Comment appears green (part of raw_value) instead of grey
```

**Current Behavior**:
- `KEY=value # comment` → The entire string "value # comment" is parsed as the value
- Comments must be on their own line to be properly highlighted
- This behavior differs between typed values and raw values:
  - `BOOL=true # comment` → Comment is parsed separately (appears grey)
  - `RAW=text # comment` → Comment is part of raw_value (appears green/white)

**Workaround**:
Place comments on their own lines:
```bash
# Comment about the following key
KEY=value

# Another comment
ANOTHER_KEY=another_value
```

**Technical Details**:
This limitation exists because:
1. Tree-sitter doesn't support lookahead patterns
2. The `#` character is valid in unquoted values
3. Disambiguating between `#` as part of value vs start of comment requires context

**Test Cases for Resolution**:
When implementing the fix, ensure these scenarios work correctly:
```bash
# From phase1-verification.env line 29
VALUE=something # This is an inline comment
# Expected: "something" is white (raw_value), "# This is an inline comment" is grey (comment)

# From phase2-verification.env line 75
ALSO_RAW=true  # This is raw_value, not string
# Current: Comment is grey (correct behavior with typed values)
# This should continue to work after the fix
```

**Future Resolution**:
This will be addressed in a future phase by either:
- Implementing an external scanner for more complex parsing logic
- Restructuring the grammar with different tokenization approach
- Adding a post-processing step for comment detection

## Mixed Alphanumeric Values

**Issue**: When a value starts with a valid integer or boolean followed by non-numeric characters (e.g., `123abc`, `trueval`), the parser tokenizes them separately rather than as a single raw value.

**Example**:
```bash
# These values are tokenized as separate parts
PORT=123abc      # Parsed as integer(123) + error
DEBUG=trueval    # Parsed as bool(true) + error
NOT_INT=123abc   # Key "NOT_INT" may not highlight correctly

# Test scenarios from phase3-test.env
NOT_BOOL=trueval  # Line 17: "NOT_BOOL" highlights correctly (red)
NOT_INT=123abc    # Line 18: "NOT_INT" highlights incorrectly (white instead of red)
```

**Current Behavior**:
- `VALUE=123abc` → Tokenized as integer `123` followed by identifier `abc` (with missing `=` error)
- `FLAG=trueval` → Tokenized as boolean `true` followed by identifier `val` (with missing `=` error)
- **Key Parsing Bug**: When a value starts with an integer/boolean followed by other characters, the key may lose proper highlighting. For example, in `NOT_INT=123abc`, the key "NOT_INT" appears white instead of the expected key color

**Workaround**:
Quote values that mix types or could be ambiguous:
```bash
PORT="123abc"
DEBUG="trueval"
VERSION="3.14.159"
```

**Technical Details**:
This is standard behavior for LR parsers like tree-sitter:
1. The lexer tokenizes input into discrete tokens before parsing
2. When it encounters `123abc`, it matches `123` as an integer token first
3. Error recovery then tries to parse the remaining `abc`
4. The key highlighting bug appears to be inconsistent - it affects integer+text but not boolean+text

**Test Cases for Resolution**:
```bash
# Both should highlight keys (NOT_BOOL, NOT_INT) in red
NOT_BOOL=trueval   # Currently works: key is red
NOT_INT=123abc     # Currently broken: key is white

# After fix, both keys should be red and values should parse as:
# - NOT_BOOL: bool(true) + error(val)
# - NOT_INT: integer(123) + error(abc)
```

## Resolution Timeline

- **Mixed Alphanumeric Values (Key Highlighting)**: Planned for Phase 4-5 (Error handling and edge case improvements)
- **Inline Comments**: Planned for a future phase with external scanner implementation (not yet scheduled)

## Array Support

**Status**: Not implemented (by design)

**Rationale**: .env files don't have a standardized array syntax. Different frameworks handle arrays differently:
- Comma-separated: `HOSTS=localhost,example.com`
- JSON format: `CONFIG=["a","b","c"]`
- Space-separated: `ALLOWED_IPS=192.168.1.1 10.0.0.1`
- Indexed keys: `HOST[0]=localhost`

**Current Behavior**:
All array-like values are parsed as raw values (white) or strings (green if quoted). This allows applications to parse arrays according to their own conventions.

**Examples**:
```bash
# All parsed as raw_value (white)
PORTS=80,443
HOSTS=localhost,example.com
NAMES=John,Jane Smith

# Parsed as string (green)
HOSTS="localhost,example.com"
CONFIG='["a","b","c"]'
```

**Recommendation**: Applications should handle array parsing from raw values according to their specific needs.

## Float Highlighting in Zed

**Issue**: Float values are parsed correctly but do not highlight in Zed editor.

**Example**:
```bash
# These parse as (float) nodes but show as white instead of orange
PI=3.14
HALF=.5  
SCIENTIFIC=1.23e-4
```

**Current Behavior**:
- Floats are correctly parsed as `(float)` nodes in the AST
- The highlight rule `(float) @number` is present
- Integers and booleans highlight correctly as orange
- Floats show as white (no highlighting applied)

**Technical Details**:
This appears to be a Zed-specific issue where float tokens are not being recognized by the syntax highlighter, despite:
1. Correct parsing in tree-sitter CLI
2. Using Zed-compatible capture names (`@number`)
3. Setting high precedence (10) for float tokens
4. Simplifying regex patterns

**Workaround**: None currently available. Floats will parse correctly but won't be visually distinguished.

## Status

These are known limitations as of Phase 6 implementation. They do not affect the parsing of properly formatted .env files where values are either clearly typed (pure integers, booleans, floats) or quoted strings.