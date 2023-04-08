var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const [a, b, c] = lines[0].split(' ').map(parseFloat).sort((a, b) => b - a);

if (a >= b + c) {
    console.log('NAO FORMA TRIANGULO');

} else {
    if (Math.pow(a, 2) === Math.pow(b, 2) + Math.pow(c, 2)) console.log('TRIANGULO RETANGULO');

    if (Math.pow(a, 2) > Math.pow(b, 2) + Math.pow(c, 2)) console.log('TRIANGULO OBTUSANGULO');

    if (Math.pow(a, 2) < Math.pow(b, 2) + Math.pow(c, 2)) console.log('TRIANGULO ACUTANGULO');

    if (a === b && b === c) {
        console.log('TRIANGULO EQUILATERO');

    } else if (a === b || b === c || a === c) {
        console.log('TRIANGULO ISOSCELES');

    }
}