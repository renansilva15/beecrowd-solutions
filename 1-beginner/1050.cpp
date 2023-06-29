#include <bits/stdc++.h>

using namespace std;

int main()
{
  map<int, string> ddd = {{61, "Brasilia"}, {71, "Salvador"}, {11, "Sao Paulo"}, {21, "Rio de Janeiro"}, {32, "Juiz de Fora"}, {19, "Campinas"}, {27, "Vitoria"}, {31, "Belo Horizonte"}};
  int input;

  cin >> input;
  try
  {
    cout << ddd.at(input) << endl;
  }
  catch (const exception &e)
  {
    cout << "DDD nao cadastrado" << endl;
  }

  return 0;
}