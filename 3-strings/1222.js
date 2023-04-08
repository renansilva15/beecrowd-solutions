var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let numberOfWords, maximumNumberOfLinesPerPage, maximumNumberOfCharactersPerLine;

let machadosShortHistoryLenght;

let numberOflines, characterCount, minimumNumberOfPagesTheShortStory;

while (lines.length - 1) {
    [numberOfWords, maximumNumberOfLinesPerPage, maximumNumberOfCharactersPerLine] = lines.splice(0, 1)[0].split(' ').map(Number);

    machadosShortHistoryLenght = lines.splice(0, 1)[0].split(' ').map(x => x.length);

    [numberOflines, characterCount, minimumNumberOfPagesTheShortStory] = [1, 0, 1];
    for (let i of machadosShortHistoryLenght) {
        if (characterCount + i > maximumNumberOfCharactersPerLine) {
            numberOflines++;
            characterCount = 0;

            if (numberOflines > maximumNumberOfLinesPerPage) {
                minimumNumberOfPagesTheShortStory++;
                numberOflines = 1;
            }
        }

        characterCount += i + 1;
    }
    
    console.log(minimumNumberOfPagesTheShortStory);
}