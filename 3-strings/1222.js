var input = require('fs').readFileSync('../dev/stdin', 'utf8');
var lines = input.split('\n');

let numberOfWords, maximumNumberOfLinesPerPage, maximumNumberOfCharactersPerLine;

let machadosShortHistoryLenght;

let numberOflines, characterCount;

while (lines.length) {
    [numberOfWords, maximumNumberOfLinesPerPage, maximumNumberOfCharactersPerLine] = lines.splice(0, 1)[0].split(' ').map(Number);

    machadosShortHistoryLenght = lines.splice(0, 1);

    machadosShortHistoryLenght[-1] -= 1;

    [numberOflines, characterCount] = [1, 0];
    for (let i of machadosShortHistoryLenght) {
        if (characterCount + i.length > maximumNumberOfCharactersPerLine) {
            numberOflines += 1;
            characterCount = 0;
        }

        characterCount += i.length;
    }
    console.log(numberOflines);
    // console.log(Math.floor(maximumNumberOfLinesPerPage / numberOflines) + maximumNumberOfLinesPerPage % numberOflines);
}