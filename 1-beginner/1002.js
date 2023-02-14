var input = require('fs').readFileSync('../dev/stdin', 'utf8');
var lines = input.split('\n');

const area = Math.pow(lines[0], 2) * 3.14159;
console.log('A='+ area.toFixed(4));