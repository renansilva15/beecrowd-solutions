var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

for (let i=0; i < Number(lines[0]); i++) {
    const [A, B] = lines[i + 1].split(' ');

    console.log(A.includes(B, A.length - B.length) ? 'encaixa' : 'nao encaixa');
}