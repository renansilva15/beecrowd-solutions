var input = require('fs').readFileSync('../dev/stdin', 'utf8');
var lines = input.split('\n');

let startAndEnd = lines[0].split(' ').map(Number);

startAndEnd[1] += startAndEnd[1] <= startAndEnd[0] ? 24 : 0;

console.log(`O JOGO DUROU ${startAndEnd[1] - startAndEnd[0]} HORA(S)`);