var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let numberOfPositiveNumbers = 0;
for (let i of lines) {
    if (i > '0') {
        numberOfPositiveNumbers++;
        
    }
}

console.log(`${numberOfPositiveNumbers} valores positivos`);