#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<string> dijkstrasJewels;
    string jewels;

    while (getline(cin, jewels))
    {
        dijkstrasJewels.insert(jewels);
    }

    cout << dijkstrasJewels.size() << endl;
    return 0;
}