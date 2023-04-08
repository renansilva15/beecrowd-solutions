var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

function longestCommonSubstring(string1, string2, string1Size, string2Size) {
    let array = new Array(string1Size + 1), lenghtOfLongestCommonSubstring = 0;

    for (let i = 0; i < array.length; i++) {
        array[i] = new Array(string2Size + 1);
    
    }

    for (let i = 0; i < array.length; i++) {
        for (let j = 0; j < array[i].length; j++) {
            if (i === 0 || j === 0) {
                array[i][j] = 0;
        
            } else if (string1[i - 1] === string2[j - 1]) {
                array[i][j] = array[i - 1][j - 1] + 1;
                lenghtOfLongestCommonSubstring = array[i][j] > lenghtOfLongestCommonSubstring ? array[i][j] : lenghtOfLongestCommonSubstring;
        
            } else {
                array[i][j] = 0;
        
            }
        }
    }

    return lenghtOfLongestCommonSubstring;
}


for (let i = 0; i < lines.length - 1; i += 2) {
    console.log(longestCommonSubstring(lines[i], lines[i + 1], lines[i].length, lines[i + 1].length));

}