#include <stdio.h>

int main() {
  double radius=0.0;

  scanf("%lf", &radius);
  printf("VOLUME = %.3lf\n", (4/3.0) * 3.14159 * radius * radius * radius);
  return 0;
}