var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let value = parseFloat(lines[0]) + 0.001;
const notes = [100, 50, 20, 10, 5, 2];
const coins = [1, 0.50, 0.25, 0.10, 0.05, 0.01];

let minimumNotes = 0;
let minimumCoins = 0;

console.log('NOTAS:');
for (let i of notes) {
    minimumNotes = parseInt(value / i);
    value %= i;

    console.log(`${minimumNotes} nota(s) de R$ ${i.toFixed(2)}`);

}

console.log('MOEDAS:');
for (let i of coins) {
    minimumCoins = parseInt(value / i);
    value %= i;

    console.log(`${minimumCoins} moeda(s) de R$ ${i.toFixed(2)}`);
}