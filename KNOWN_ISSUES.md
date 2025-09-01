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

## Status

This is a known limitation as of Phase 2 completion. It does not affect the parsing of values or other functionality - only the syntax highlighting of inline comments.