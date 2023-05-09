#include <bits/stdc++.h>

using namespace std;
vector<string> splitString(const string& str, char delimiter);

int main()
{
    int numberOfWords, numberOfJobDescriptions;
    map<string, int> hayPointDict;
    string hayPointName, jobDescription;
    int hayPointValue, salaryComputed = 0;
    vector<string> splitedJobDescription;

    cin >> numberOfWords >> numberOfJobDescriptions;

    for (int i = 0; i < numberOfWords; i++)
    {
        cin >> hayPointName >> hayPointValue;
        hayPointDict[hayPointName] = hayPointValue;
    }

    while (getline(cin, jobDescription))
    {
        splitedJobDescription = splitString(jobDescription, ' ');
        for (int i = 0; i < splitedJobDescription.size(); i++)
        {
            if (splitedJobDescription[i] == ".")
            {
                cout << salaryComputed << endl;
                salaryComputed = 0;
                continue;
            }

            salaryComputed += hayPointDict[splitedJobDescription[i]];
        }
    }
    
    return 0;
}

vector<string> splitString(const string& str, char delimiter)
{
    vector<string> substrings;
    istringstream iss(str);
    string token;
    
    while (getline(iss, token, delimiter))
    {
        substrings.push_back(token);
    }
    
    return substrings;
}