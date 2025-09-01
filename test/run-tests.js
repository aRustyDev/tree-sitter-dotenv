#!/usr/bin/env node
/**
 * Test runner that validates parse trees match expected output
 */
const fs = require('fs');
const path = require('path');
const Parser = require('tree-sitter');
const EnvGrammar = require('../');

const parser = new Parser();
parser.setLanguage(EnvGrammar);

class TestRunner {
  constructor() {
    this.passed = 0;
    this.failed = 0;
    this.errors = [];
  }
  
  parseExpectedTree(expectedStr) {
    // Convert the expected tree format to a comparable structure
    // Remove whitespace and normalize
    return expectedStr
      .replace(/\s+/g, ' ')
      .replace(/\(\s+/g, '(')
      .replace(/\s+\)/g, ')')
      .trim();
  }
  
  parseActualTree(tree) {
    // Convert actual tree to string format
    return tree.rootNode.toString()
      .replace(/\s+/g, ' ')
      .replace(/\(\s+/g, '(')
      .replace(/\s+\)/g, ')')
      .trim();
  }
  
  runTest(name, input, expected) {
    try {
      const tree = parser.parse(input);
      const actualTree = this.parseActualTree(tree);
      const expectedTree = this.parseExpectedTree(expected);
      
      if (actualTree === expectedTree) {
        this.passed++;
        console.log(`✅ ${name}`);
      } else {
        this.failed++;
        this.errors.push({
          name,
          expected: expectedTree,
          actual: actualTree
        });
        console.log(`❌ ${name}`);
        console.log(`   Expected: ${expectedTree}`);
        console.log(`   Actual:   ${actualTree}`);
      }
    } catch (error) {
      this.failed++;
      this.errors.push({
        name,
        error: error.message
      });
      console.log(`❌ ${name} - Error: ${error.message}`);
    }
  }
  
  runTestFile(filePath) {
    const content = fs.readFileSync(filePath, 'utf8');
    const tests = content.split(/={10,}/);
    
    tests.forEach(test => {
      if (!test.trim()) return;
      
      const lines = test.trim().split('\n');
      const name = lines[0].trim();
      const separatorIndex = lines.findIndex(line => line.startsWith('---'));
      
      if (separatorIndex === -1) {
        console.error(`⚠️  Invalid test format in ${name}`);
        return;
      }
      
      const input = lines.slice(1, separatorIndex).join('\n').trim();
      const expected = lines.slice(separatorIndex + 1).join('\n').trim();
      
      this.runTest(name, input, expected);
    });
  }
  
  runAllTests(corpusDir) {
    const files = fs.readdirSync(corpusDir)
      .filter(f => f.endsWith('.txt'));
    
    files.forEach(file => {
      console.log(`\nRunning tests in ${file}:`);
      this.runTestFile(path.join(corpusDir, file));
    });
    
    console.log('\n' + '='.repeat(50));
    console.log(`Total: ${this.passed + this.failed} tests`);
    console.log(`Passed: ${this.passed}`);
    console.log(`Failed: ${this.failed}`);
    
    if (this.failed > 0) {
      console.log('\nFailed tests:');
      this.errors.forEach(err => {
        console.log(`- ${err.name}`);
        if (err.error) {
          console.log(`  Error: ${err.error}`);
        }
      });
      process.exit(1);
    }
  }
}

// Main
if (require.main === module) {
  const corpusDir = path.join(__dirname, 'corpus');
  const runner = new TestRunner();
  runner.runAllTests(corpusDir);
}

module.exports = TestRunner;