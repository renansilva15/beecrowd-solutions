#include <stdio.h>

int main() {
  int x=0, y=0, i=0;

  scanf("%d%d", &x, &y);

  for(i = 1; i <= y; i++) {
    if(i % x == 0) {
      printf("%d\n", i);

    }else {
      printf("%d ", i);

    }
  }
}