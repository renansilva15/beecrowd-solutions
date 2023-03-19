var input = require('fs').readFileSync('../dev/stdin', 'utf8');
var lines = input.split('\n');

while (lines[0] !== '0 0') {
    let numberOfDebentures = lines.splice(0, 1)[0].split(' ').map(Number)[1];
    let monetaryReservesOfBanks = lines.splice(0, 1)[0].split(' ').map(Number);
    for (let i = 0; i < numberOfDebentures; i++) {
        let debentures = lines.splice(0, 1)[0].split(' ').map(Number);

        // Trying to liquidate all the debentures
        monetaryReservesOfBanks[debentures[0] - 1] -= debentures[2];
        monetaryReservesOfBanks[debentures[1] - 1] += debentures[2];
    }

    console.log(monetaryReservesOfBanks.find(negativeReserve => negativeReserve < 0) ? 'N' : 'S');
}