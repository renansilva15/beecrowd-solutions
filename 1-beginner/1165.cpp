#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, X, i;
    string message;

    cin >> N;

    while (N)
    {
        cin >> X;
        
        for (i = X - 1; i > 1 && X % i; i--)

        message = (i > 2) ? " nao" : "";

        cout << X << message << " eh primo" << endl; 

        N--;
    }

    return 0;
}