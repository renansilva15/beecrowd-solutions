#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, flag = 0;

  while (cin >> n && n)
  {
    cin.ignore(); //

    if (flag)
    {
      cout << endl;
      flag = 0;
    }

    vector<string> text;
    string line, lineWithoutSpaces;
    int biggestString = 0, j;

    for (int i = 0; i < n; i++)
    {
      lineWithoutSpaces.clear();
      getline(cin, line);

      j = 0;
      while (line[j] == ' ')
        j++;

      line = line.erase(0, j);

      j = line.size() - 1;
      while (line[j] == ' ')
      {
        line.pop_back();
        j--;
      }

      for (j = 0; j < line.size(); j++)
        if (!(line[j] == ' ' && line[j + 1] == ' '))
          lineWithoutSpaces += line[j];

      text.push_back(lineWithoutSpaces);

      if (lineWithoutSpaces.size() > biggestString)
        biggestString = lineWithoutSpaces.size();
    }

    for (int i = 0; i < n; i++)
    {
      line.clear();

      for (j = text[i].size() - 1; j >= 0; j--)
        if (!(text[i][j] == ' ' && text[i][j - 1] == ' '))
          line += text[i][j];

      int rightSpaces = biggestString - line.size();
      if (rightSpaces > 0)
        line.append(rightSpaces, ' ');

      reverse(line.begin(), line.end());

      cout << line << endl;
    }

    flag = 1;
  }

  return 0;
}