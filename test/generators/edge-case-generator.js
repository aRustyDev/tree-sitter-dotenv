#!/usr/bin/env node
const fs = require('fs');
const path = require('path');

class EdgeCaseGenerator {
  constructor(outputDir = 'test/edge-cases') {
    this.outputDir = outputDir;
    if (!fs.existsSync(outputDir)) {
      fs.mkdirSync(outputDir, { recursive: true });
    }
  }
  
  // Generate test cases for empty values
  generateEmptyValues() {
    const cases = [
      'EMPTY=',
      'EMPTY_WITH_COMMENT= # this is empty',
      'EMPTY_WITH_SPACE= ',
      'EMPTY_WITH_TAB=\t',
      'EMPTY_NEWLINE=\n',
      'MULTIPLE_EMPTY=\n\nANOTHER_EMPTY=',
    ];
    
    const content = cases.join('\n');
    fs.writeFileSync(path.join(this.outputDir, 'empty-values.env'), content);
    return cases.length;
  }
  
  // Generate test cases for whitespace variations
  generateWhitespaceVariations() {
    const cases = [
      'NO_SPACE=value',
      'SPACE_BEFORE_EQUALS =value',
      'SPACE_AFTER_EQUALS= value',
      'SPACES_BOTH_SIDES = value',
      'MULTIPLE_SPACES  =  value',
      'TAB_BEFORE_EQUALS\t=value',
      'TAB_AFTER_EQUALS=\tvalue',
      'MIXED_WHITESPACE \t = \t value',
      'TRAILING_SPACE=value ',
      'TRAILING_TAB=value\t',
    ];
    
    const content = cases.join('\n');
    fs.writeFileSync(path.join(this.outputDir, 'whitespace.env'), content);
    return cases.length;
  }
  
  // Generate test cases with special characters
  generateSpecialCharacters() {
    const cases = [
      'BACKSLASHES=C:\\Users\\path\\to\\file',
      'FORWARD_SLASHES=/usr/local/bin/app',
      'MIXED_SLASHES=C:/Users\\Documents/file',
      'AT_SYMBOLS=user@example.com@v1.0',
      'HASH_IN_VALUE=value#not-a-comment',
      'DOLLAR_SIGNS=price$99.99$USD',
      'AMPERSANDS=param1=a&param2=b&param3=c',
      'PIPES=command|grep|awk|sed',
      'BRACKETS=array[0][key]={value}',
      'UNICODE=emoji_🎉_celebration_🚀',
      'CONTROL_CHARS=line1\\nline2\\ttab\\rreturn',
      'QUOTES_MIX=it\'s "mixed" `quotes` here',
      'PARENTHESES=(value (nested) more)',
      'MATH_SYMBOLS=1+2*3/4-5=result',
      'REGEX_LIKE=^start.*middle.*end$',
    ];
    
    const content = cases.join('\n');
    fs.writeFileSync(path.join(this.outputDir, 'special-chars.env'), content);
    return cases.length;
  }
  
  // Generate very long values
  generateLongValues() {
    const cases = [];
    
    // Long continuous string
    cases.push(`LONG_CONTINUOUS=${'x'.repeat(1000)}`);
    
    // Long URL with many parameters
    const params = Array(50).fill(0).map((_, i) => `param${i}=value${i}`).join('&');
    cases.push(`LONG_URL=https://example.com/api/v1/endpoint?${params}`);
    
    // Long path
    const deepPath = Array(50).fill('folder').join('/');
    cases.push(`LONG_PATH=/root/${deepPath}/file.txt`);
    
    // Long JSON-like value
    const jsonLike = JSON.stringify(Array(100).fill({key: 'value', nested: {data: 'test'}}));
    cases.push(`LONG_JSON=${jsonLike}`);
    
    // Long base64
    const base64 = Buffer.from('x'.repeat(1000)).toString('base64');
    cases.push(`LONG_BASE64=${base64}`);
    
    const content = cases.join('\n');
    fs.writeFileSync(path.join(this.outputDir, 'long-values.env'), content);
    return cases.length;
  }
  
  // Generate edge cases that might break parsers
  generateParserBreakers() {
    const cases = [
      // Keys that look like comments
      '#KEY=value',
      ';KEY=value',
      '//KEY=value',
      
      // Keys with equals signs
      'KEY=WITH=EQUALS=value',
      'KEY==value',
      '===value',
      
      // Values that look like variables
      'KEY=$VALUE',
      'KEY=${VALUE}',
      'KEY=$(command)',
      'KEY=`command`',
      
      // Incomplete syntax
      'KEY=${INCOMPLETE',
      'KEY="incomplete',
      'KEY=\'incomplete',
      
      // Reserved words as keys
      'true=false',
      'false=true',
      'null=undefined',
      'undefined=null',
      
      // Numeric keys
      '123=value',
      '0xFF=hex',
      '3.14=pi',
      '1e10=scientific',
    ];
    
    const content = cases.join('\n');
    fs.writeFileSync(path.join(this.outputDir, 'parser-breakers.env'), content);
    return cases.length;
  }
  
  // Generate all test files
  generateAll() {
    console.log('Generating edge case test files...\n');
    
    const counts = {
      empty: this.generateEmptyValues(),
      whitespace: this.generateWhitespaceVariations(),
      special: this.generateSpecialCharacters(),
      long: this.generateLongValues(),
      breakers: this.generateParserBreakers(),
    };
    
    const total = Object.values(counts).reduce((a, b) => a + b, 0);
    
    console.log('Generated files:');
    console.log(`  ✅ empty-values.env (${counts.empty} cases)`);
    console.log(`  ✅ whitespace.env (${counts.whitespace} cases)`);
    console.log(`  ✅ special-chars.env (${counts.special} cases)`);
    console.log(`  ✅ long-values.env (${counts.long} cases)`);
    console.log(`  ✅ parser-breakers.env (${counts.breakers} cases)`);
    console.log(`\nTotal: ${total} edge cases in ${Object.keys(counts).length} files`);
    console.log(`\nFiles saved to: ${this.outputDir}/`);
  }
}

// Run if called directly
if (require.main === module) {
  const generator = new EdgeCaseGenerator();
  generator.generateAll();
}

module.exports = EdgeCaseGenerator;