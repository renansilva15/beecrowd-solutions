#include <bits/stdc++.h>

using namespace std;

int main()
{
    float price[] = {1.5, 2.5, 3.5, 4.5, 5.5}, result;
    int P, index, quantity;

    cin >> P;
    
    for (int i = 0; i < P; i++)
    {
        cin >> index >> quantity;
        result += price[index - 1001] * quantity;
    }

    printf("%.2f\n", result);
    return 0;
}