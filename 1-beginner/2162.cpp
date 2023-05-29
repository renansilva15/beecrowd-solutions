#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, aux;

    cin >> N;

    vector<int> height(N);

    for (int i=0; i < N; i++)
    {
        cin >> height[i];
    }

    aux = height[1] > height[0] ? 1 : 2;

    for (int i=1; i < N && aux; i++)
    {
        if (aux == 1)
        {
            aux = height[i] > height[i-1] ? 2 : 0;
        }
        else
        {
            aux = height[i] < height[i-1] ? 1 : 0;
        }
    }

    cout << (aux ? 1 : 0) << endl;

    return 0;
}