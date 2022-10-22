#include <stdio.h>

int main() {
  double grades[4]={0.0}, average=0.0;

  scanf("%lf%lf%lf%lf", &grades[0], &grades[1], &grades[2], &grades[3]);

  average = ((grades[0] * 2.0) + (grades[1] * 3.0) + (grades[2] * 4.0) + (grades[3] * 1.0)) / (2.0 + 3.0 + 4.0 + 1.0);

  printf("Media: %.1lf\n", average);

  if(average >= 7.0) {
    printf("Aluno aprovado.\n");

  }else if(average < 5.0) {
    printf("Aluno reprovado.\n");

  }else {
    printf("Aluno em exame.\n");

    // exam grade
    scanf("%lf", &grades[0]);
    printf("Nota do exame: %.1lf\n", grades[0]);

    grades[0] = (grades[0] + average) / 2.0;

    if(grades[0] >= 5.0) {
      printf("Aluno aprovado.\n");

    }else {
      printf("Aluno reprovado.\n");

    }

    printf("Media final: %.1lf\n", grades[0]);
  }

  return 0;
}