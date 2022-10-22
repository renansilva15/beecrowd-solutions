#include <stdio.h>

int main() {
  int i=0, j=0, x=0;

  scanf("%d", &i);
  while(i-- > 0) {
    int hash=0, number_of_element=-1;
    scanf("%d", &j);

    while(j-- > 0) {
      char string[51] = {""};
      number_of_element++;

      scanf(" %s", string);

      for(x=0; string[x] != '\0'; x++)
        hash += (string[x] - 65) + number_of_element + x;
    }

    printf("%d\n", hash);
  }

  return 0;
}