#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, numberOfDiamonds, mining;
    string ore;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        numberOfDiamonds = 0;
        mining = 0;
        cin >> ore;

        for (char j : ore)
        {
            if (j == '<')
            {
                mining++;
            }
            else if (mining && j == '>')
            {
                numberOfDiamonds++;
                mining--;
            }
        }

        cout << numberOfDiamonds << endl;
    }
}