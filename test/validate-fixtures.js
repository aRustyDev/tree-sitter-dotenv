#!/usr/bin/env node
const fs = require('fs');
const path = require('path');
const Parser = require('tree-sitter');
const EnvGrammar = require('../');

const parser = new Parser();
parser.setLanguage(EnvGrammar);

const fixtures = [
  'test-strings-env.env',
  'test-urls-npmrc.npmrc',
  'test-primitives-env.env',
  'test-errors-env.env',
  'test-edge-cases-ini.ini',
  'test-interpolation-env.env',
  'test-complete-properties.properties'
];

let allValid = true;

fixtures.forEach(fixture => {
  const filePath = path.join(__dirname, 'fixtures', fixture);
  if (!fs.existsSync(filePath)) {
    console.error(`❌ Missing: ${fixture}`);
    allValid = false;
    return;
  }
  
  const content = fs.readFileSync(filePath, 'utf8');
  const tree = parser.parse(content);
  
  if (tree.rootNode.hasError) {
    console.error(`❌ Parse error in ${fixture}`);
    console.error(`   Content preview: ${content.substring(0, 50)}...`);
    allValid = false;
  } else {
    console.log(`✅ Valid: ${fixture}`);
  }
});

if (!allValid) {
  console.error('\n⚠️  Some test files are invalid or missing');
  process.exit(1);
} else {
  console.log('\n✅ All test files are valid');
}