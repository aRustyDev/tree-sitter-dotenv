# Phase 6 Float Highlighting Fix Attempts

## Problem
Floats parse correctly but don't highlight in Zed. All float values show as white instead of orange.

## What We've Tried

1. **Updated highlight captures to Zed syntax** ✅
   - Changed `@constant.numeric.float` → `@number`
   - Changed `@constant.numeric.integer` → `@number`
   - Changed `@constant.builtin.boolean` → `@boolean`

2. **Increased float precedence to 10** ✅
   - Ensures floats are matched before raw_value

3. **Removed raw_value highlighting** ✅
   - Commented out to prevent conflict

## Current Status
- Parser correctly identifies floats: `(float)` nodes in AST
- Highlights.scm uses correct Zed captures: `(float) @number`
- But Zed still shows floats as white (no highlighting)

## Hypothesis
The issue might be:
1. **Token-level conflict**: Using `token(prec(10, ...))` might prevent Zed from applying highlights
2. **Pattern complexity**: The float regex might be too complex for Zed's highlighter
3. **Grammar structure**: The way we define float in the grammar might not work with Zed

## Next Attempt
Try simplifying the float pattern or restructuring how it's defined in the grammar.