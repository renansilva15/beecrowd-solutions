#include <bits/stdc++.h>

using namespace std;

int greatestCommonDivisor(int quotient, int remainder);

int main()
{
  int numberOfTestCases, numerator1, denominator1, numerator2, denominator2, numerator, denominator, GCD;
  string testCase;

  cin >> numberOfTestCases;
  cin.ignore();

  for (int i = 0; i < numberOfTestCases; i++)
  {
    getline(cin, testCase);

    istringstream ss(testCase);
    string word;
    vector<string> words;

    while (getline(ss, word, ' '))
    {
      words.push_back(word);
    }

    numerator1 = stoi(words[0]);
    denominator1 = stoi(words[2]);
    numerator2 = stoi(words[4]);
    denominator2 = stoi(words[6]);

    switch (words[3][0])
    {
    case '+':
      numerator = (numerator1 * denominator2 + numerator2 * denominator1);
      denominator = (denominator1 * denominator2);
      break;

    case '-':
      numerator = (numerator1 * denominator2 - numerator2 * denominator1);
      denominator = (denominator1 * denominator2);
      break;

    case '*':
      numerator = (numerator1 * numerator2);
      denominator = (denominator1 * denominator2);
      break;

    case '/':
      numerator = (numerator1 * denominator2);
      denominator = (numerator2 * denominator1);
      break;
    }

    printf("%d/%d = ", numerator, denominator);

    GCD = greatestCommonDivisor(abs(numerator), abs(denominator));

    if (GCD > 1)
    {
      printf("%d/%d\n", numerator / GCD, denominator / GCD);
    }
    else
    {
      printf("%d/%d\n", numerator, denominator);
    }
  }

  return 0;
}

int greatestCommonDivisor(int quotient, int remainder)
{
  if (!remainder)
  {
    return quotient;
  }
  else
  {
    return greatestCommonDivisor(remainder, quotient % remainder);
  }
}