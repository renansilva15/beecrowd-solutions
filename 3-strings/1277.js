var input = require('fs').readFileSync('../dev/stdin', 'utf8');
var lines = input.split('\n');

let index = 2, studentsName, studentsAttendance, studentsDenied, pCount, mCount;
while (lines[0] > 0) {
    studentsName = lines[index].split(' ');
    studentsAttendance = lines[index + 1].split(' ');
    studentsDenied = [];

    for (let i in studentsAttendance) {
        pCount = (studentsAttendance[i].match(/P/g) || []).length;
        mCount = (studentsAttendance[i].match(/M/g) || []).length;

        if (pCount < (studentsAttendance[i].length - mCount) * 0.75) {
            studentsDenied.push(studentsName[i]);
            
        }
    }

    console.log(studentsDenied.join([separator = ' ']));

    index += 3;
    lines[0]--;
}