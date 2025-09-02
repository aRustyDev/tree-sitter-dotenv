# Phase 6: Array Support Decision

## Summary
After research and analysis, I recommend **NOT implementing array support** in this phase.

## Rationale

### 1. No Standard Format
.env files don't have a standardized array syntax. Different frameworks handle arrays differently:
- Some use comma-separated values: `HOSTS=localhost,example.com`
- Some use JSON: `CONFIG=["a","b","c"]`
- Some use space-separated: `ALLOWED_IPS=192.168.1.1 10.0.0.1`
- Some use indexed keys: `HOST[0]=localhost`, `HOST[1]=example.com`

### 2. Parsing Ambiguity
Without a standard, we'd have to guess the user's intent:
- Is `PORTS=80,443` two numbers or one string?
- Is `NAMES=John,Jane Smith` two names or three?
- Should `[]` be parsed as an empty array or a string?

### 3. Current Grammar Handles Common Cases
Our current grammar already properly parses most "array-like" values:
- Comma-separated: Parsed as raw_value (white)
- JSON arrays: Parsed as raw_value (white)
- Quoted arrays: Parsed as strings (green)

### 4. Application Responsibility
Array parsing is typically handled by the application layer:
- Applications know their expected format
- They can split/parse values as needed
- This maintains .env file simplicity

## Recommendation
1. Keep the current grammar without array support
2. Document this decision in KNOWN_ISSUES.md
3. Let applications handle array parsing from raw values

## Future Consideration
If array support is needed later, it should:
1. Be implemented as a separate phase
2. Include community input on preferred syntax
3. Possibly use a configuration option to select array format