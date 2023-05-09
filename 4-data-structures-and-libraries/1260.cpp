#include <bits/stdc++.h>

using namespace std;

int main()
{
    int numberOfTestCases, total;
    string treeSpecieName = " ";
    map<string, float> treeSpecies;
    map<string, float>::iterator it;

    cin >> numberOfTestCases;

    cin.ignore();

    for (int i = 0; i < numberOfTestCases; i++)
    {
        total = 0.0;
        treeSpecies.clear();

        if (i)
        {
            cout << endl;
        }
        else
        {
            getline(cin, treeSpecieName);
        }
        
        while (getline(cin, treeSpecieName), !treeSpecieName.empty())
        {
            if (treeSpecies[treeSpecieName])
            {
                treeSpecies[treeSpecieName]++;
            }
            else
            {
                treeSpecies[treeSpecieName] = 1;
            }
            total++;
        }


        for (it = treeSpecies.begin(); it != treeSpecies.end(); it++)
        {
            cout << it->first << " " << fixed << setprecision(4) << (it->second / total) * 100.0 << endl;
        }

    }
    return 0;
}