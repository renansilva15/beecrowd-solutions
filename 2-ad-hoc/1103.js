var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

for (let i of lines) {
    i = i.split(' ');
    let h1 = Number(i[0]), m1 = Number(i[1]), h2 = Number(i[2]), m2 = Number(i[3]);

    if (h1 === 0 && m1 === 0 && h2 === 0 && m2 === 0) {
        break;

    } else {
        h2 += h1 > h2 || (h2 == h1 && m1 > m2) ? 24 : 0;
        h1 *= 60;
        h2 *= 60;
        console.log((h2 + m2) - (h1 + m1));

    }
}