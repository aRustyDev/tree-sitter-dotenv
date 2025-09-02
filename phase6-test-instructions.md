# Phase 6 Float Testing Instructions

## Steps to Test in Zed

1. Reinstall the extension:
   ```bash
   cd ~/code/contributing/zed-env
   zed --install-extension .
   ```

2. Open the test file in Zed:
   ```bash
   zed ~/.claude/tests/tree-sitter/kvconf/phase6-floats.env
   ```

## Expected Highlighting

According to the user's theme color map:
- **Orange**: booleans, integers, floats
- **Green**: strings  
- **White**: raw_values
- **Grey**: comments
- **Cyan**: operators
- **Red**: errors/keys (variable names)

## What to Verify

### Should be Orange (floats):
- `3.14` - standard decimal
- `.5` - decimal without leading digit
- `42.` - decimal without trailing digit
- `-2.718` - negative decimal
- `1.23e-4` - scientific notation with lowercase e
- `6.022E23` - scientific notation with uppercase E
- `1e10` - integer-base scientific notation

### Should NOT be Orange:
- `"3.14"` - quoted (should be green)
- `'3.14'` - single quoted (should be green)
- `192.168.1.1` - IP address (should be white)
- `v3.14` - version string (should be white/mixed)

## Commit Hash
The extension is now using commit `31d18f9` which includes float support.