#!/usr/bin/env node
const fs = require('fs');
const path = require('path');
const { execSync } = require('child_process');

// Store baseline parse results
const baselineDir = path.join(__dirname, 'baseline');
const testCases = [
  'key=value',
  'key="string value"',
  'key=true',
  'key=123',
  'key=https://example.com',
  'key = value',  // spacing
  '@scope:key=value',  // namespace
  'key=${VAR}',  // interpolation
];

function ensureBaselineDir() {
  if (!fs.existsSync(baselineDir)) {
    fs.mkdirSync(baselineDir, { recursive: true });
  }
}

function generateBaseline() {
  console.log('Generating baseline parse results...');
  ensureBaselineDir();
  
  testCases.forEach((testCase, index) => {
    const filename = `test${index}.env`;
    const filePath = path.join(baselineDir, filename);
    fs.writeFileSync(filePath, testCase);
    
    const output = execSync(`npx tree-sitter parse ${filePath}`, {
      cwd: path.join(__dirname, '..'),
      encoding: 'utf8'
    });
    
    fs.writeFileSync(filePath + '.baseline', output);
    console.log(`✅ Baseline saved for: ${testCase}`);
  });
}

function runRegression() {
  console.log('Running regression tests...');
  let failures = 0;
  
  testCases.forEach((testCase, index) => {
    const filename = `test${index}.env`;
    const filePath = path.join(baselineDir, filename);
    const baselinePath = filePath + '.baseline';
    
    if (!fs.existsSync(baselinePath)) {
      console.error(`❌ Missing baseline for: ${testCase}`);
      failures++;
      return;
    }
    
    const currentOutput = execSync(`npx tree-sitter parse ${filePath}`, {
      cwd: path.join(__dirname, '..'),
      encoding: 'utf8'
    });
    
    const baseline = fs.readFileSync(baselinePath, 'utf8');
    
    if (currentOutput.trim() !== baseline.trim()) {
      console.error(`❌ Regression in: ${testCase}`);
      console.error('Expected:', baseline.trim());
      console.error('Got:', currentOutput.trim());
      failures++;
    } else {
      console.log(`✅ No regression: ${testCase}`);
    }
  });
  
  if (failures > 0) {
    console.error(`\n❌ ${failures} regression(s) found`);
    process.exit(1);
  } else {
    console.log('\n✅ All regression tests passed');
  }
}

// Main
const command = process.argv[2];
if (command === 'baseline') {
  generateBaseline();
} else if (command === 'test') {
  runRegression();
} else {
  console.log('Usage:');
  console.log('  node regression-test.js baseline  # Generate baselines');
  console.log('  node regression-test.js test      # Run regression tests');
}