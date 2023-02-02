#include <stdio.h>

void show(int *array, int size);

int main() {
  int odd[5]={0}, even[5]={0}, i=0, odd_index=0, even_index=0, aux=0;

  for(; i < 15; i++) {
    scanf("%d", &aux);

    if(aux % 2) {
      odd[odd_index] = aux;
      odd_index++;

    }else {
      even[even_index] = aux;
      even_index++;

    }

    if(odd_index == 5) {
      show(odd, odd_index);
      odd_index = 0;
    }

    if(even_index == 5) {
      show(even, even_index);
      even_index = 0;
    }
  }

  show(odd, odd_index);
  show(even, even_index);
  return 0;
}


void show(int *array, int size) {
  int i=0, message_index=0;
  char message[2][6]={"par", "impar"};

  if(array[0] % 2)
    message_index++;

  for(; i < size ;i++)
    printf("%s[%d] = %d\n", message[message_index], i, array[i]);
}