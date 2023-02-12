var input = require('fs').readFileSync('../dev/stdin', 'utf8');
var lines = input.split('\n');

const area = lines[0] * lines[0] * 3.14159;
console.log("A="+ area.toFixed(4));