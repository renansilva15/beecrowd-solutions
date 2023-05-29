#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> X(10);


    for (int i = 0; i < X.capacity(); i++)
    {
        cin >> X[i];

        X[i] = X[i] < 1 ? 1 : X[i];
    }

    for (int i = 0; i < X.capacity(); i++)
    {
        printf("X[%d] = %d\n", i, X[i]);
    }

    return 0;
}