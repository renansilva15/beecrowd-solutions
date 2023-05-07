var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let numberOfEvenNumbers = 0;
for (let i of lines) {
    if (Number(i) % 2 === 0) {
        numberOfEvenNumbers++;
        
    }
}

console.log(`${numberOfEvenNumbers - 1} valores pares`);