#include <bits/stdc++.h>

using namespace std;

int main()
{
    int amountOfTrips, quantityOfProductsAtTheMarket, amountOfProducts, quantityOfProducts;
    map<string, float> productAndPrice;
    string productName;
    float productPrice, moneySpentByMsParcinova;

    cin >> amountOfTrips;
    for (int i = 0; i < amountOfTrips; i++)
    {
        productAndPrice.clear();
        moneySpentByMsParcinova = 0.0;

        cin >> quantityOfProductsAtTheMarket;
        for (int j = 0; j < quantityOfProductsAtTheMarket; j++)
        {
            cin >> productName >> productPrice;
            productAndPrice[productName] = productPrice;
        }

        cin >> amountOfProducts;
        for (int j = 0; j < amountOfProducts; j++)
        {
            cin >> productName >> quantityOfProducts;
            moneySpentByMsParcinova += productAndPrice[productName] * quantityOfProducts;
        }
        printf("R$ %.2f\n", moneySpentByMsParcinova);
    }
    return 0;
}