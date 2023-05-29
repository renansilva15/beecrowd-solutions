#include <bits/stdc++.h>

using namespace std;

int main()
{
    int L, D, K, P;

    cin >> L >> D >> K >> P;

    cout << (L / D * P + (K * L)) << endl;

    return 0;
}