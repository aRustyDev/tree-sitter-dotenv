const Parser = require('tree-sitter');
const Language = require('./bindings/node');

const parser = new Parser();
parser.setLanguage(Language);

const sourceCode = `
# Comment
registry=https://registry.npmjs.org
auto-install-peers=true
@mycompany:registry=https://npm.company.com
`;

const tree = parser.parse(sourceCode);
console.log(tree.rootNode.toString());

// Walk the tree and show node types
function walk(node, indent = '') {
  console.log(indent + node.type + (node.text.length < 50 ? ` "${node.text}"` : ''));
  for (let i = 0; i < node.childCount; i++) {
    walk(node.child(i), indent + '  ');
  }
}

console.log('\nNode types in tree:');
walk(tree.rootNode);