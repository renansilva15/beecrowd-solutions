#include <stdio.h>

int min(int n1, int n2);

int main() {
  int n=0, i=0, j=0, result=0;
  char l=' ';


  while(scanf("%d", &n)  != EOF) {
    int m=0, left[31]={0}, right[31]={0};

    for(i=0; i < n; i++) {
      scanf("%d %c", &m, &l);

      if(l == 'E') {
        left[m - 30]++;

      }else {
        right[m - 30]++;

      }
    }
    
    result = 0;
    for(i=0; i < 31; i++)
      result += min(left[i], right[i]);

    printf("%d\n", result);
  }

  return 0;
}


int min(int n1, int n2) {
  return n1 < n2 ? n1 : n2;

}