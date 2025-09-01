# Known Issues and Limitations

## Inline Comments

**Issue**: Comments placed after values on the same line are parsed as part of the value rather than as separate comment nodes.

**Example**:
```bash
# This works correctly - comment on its own line
KEY=value

# This has limited support - comment is parsed as part of value
KEY=value # this comment becomes part of the value
```

**Current Behavior**:
- `KEY=value # comment` → The entire string "value # comment" is parsed as the value
- Comments must be on their own line to be properly highlighted

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
```

**Current Behavior**:
- `VALUE=123abc` → Tokenized as integer `123` followed by identifier `abc` (with missing `=` error)
- `FLAG=trueval` → Tokenized as boolean `true` followed by identifier `val` (with missing `=` error)

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

## Status

These are known limitations as of Phase 3 implementation. They do not affect the parsing of properly formatted .env files where values are either clearly typed (pure integers, booleans) or quoted strings.