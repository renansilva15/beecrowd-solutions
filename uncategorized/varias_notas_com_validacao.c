#include <stdio.h>

double read(double start, double end, char *message);

int main() {
  double n1=0.0, n2=0.0;

  do {
    n1 = read(0.0, 10.0, "nota invalida");
    n2 = read(0.0, 10.0, "nota invalida");

    printf("media = %.2lf\nnovo calculo (1-sim 2-nao)\n", (n1 + n2) / 2.0);

    n1 = read(1, 2, "novo calculo (1-sim 2-nao)");
  }while(n1 != 2);

  return 0;
}


double read(double start, double end, char *message) {
  double number=0.0;

  scanf("%lf", &number);
  if(number < start || number > end) {
    printf("%s\n", message);

    number = read(start, end, message);
  }

  return number;
}