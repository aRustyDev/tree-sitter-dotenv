module.exports = require("./bindings/node");

try {
  module.exports.nodeTypeInfo = require("./src/node-types.json");
} catch (_) {}