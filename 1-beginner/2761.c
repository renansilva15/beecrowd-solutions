#include <stdio.h>

int main() {
  int a=0;
  float b=0.0;
  char c='\0', d[50]={""};

  scanf("%d%f %c %[^\n]", &a, &b, &c, d);

  printf("%d%f%c%s\n", a, b, c, d);
  printf("%d\t%.6f\t%c\t%s\n", a, b, c, d);
  printf("%10d%10.6f%10c%10s\n", a, b, c, d);
  return 0;
}