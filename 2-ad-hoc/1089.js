var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let index = 0, numberOfSamples, heightSamples, flag, numberOfPeaks;

while (lines[index] !== '0') {
    numberOfSamples = Number(lines[index]);
    heightSamples = lines[index + 1].split(' ').map(Number);

    flag = heightSamples[0] > heightSamples[heightSamples.length - 1] ? 0 : 1;
    numberOfPeaks = 0;

    heightSamples.push(heightSamples[0]);

    for (let i = 1; i < heightSamples.length; i++) {
        if (flag && heightSamples[i] > heightSamples[i - 1]) {
            numberOfPeaks++;
            flag = 0;
            
        } else if (!flag && heightSamples[i] < heightSamples[i - 1]) {
            numberOfPeaks++;
            flag = 1;
            
        }
    }

    console.log(numberOfPeaks);
    index += 2;
}