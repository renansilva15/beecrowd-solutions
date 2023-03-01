var input = require('fs').readFileSync('../dev/stdin', 'utf8');
var lines = input.split('\n');

const arrayABC = lines[0].split(' ').map(parseFloat);
const arrayABCSorted = lines[0].split(' ').map(parseFloat).sort();

if (arrayABCSorted[0] + arrayABCSorted[1] > arrayABCSorted[2]) {
    console.log(`Perimetro = ${(arrayABCSorted.reduce((a, b) => a + b)).toFixed(1)}`);

} else {
    console.log(`Area = ${(((arrayABC[0] + arrayABC[1]) * arrayABC[2]) / 2).toFixed(1)}`);

}