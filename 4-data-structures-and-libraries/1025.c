#include <stdio.h>
#include <stdlib.h>

int comparador(const void *a, const void *b);
int sequencialSearch(int marbleNumbers[], int numberOfMarbles, int queryNumber);

int main()
{
    int index = 0, numberOfMarbles = 1, numberOfQueries = 1, marbleNumbers[10000] = {0}, queryNumbers[10000] = {0}, queryResult = 0, i = 0;

    scanf("%d%d", &numberOfMarbles, &numberOfQueries);
    while (numberOfMarbles && numberOfQueries)
    {
        for (i = 0; i < numberOfMarbles; i++)
        {
            scanf("%d", &marbleNumbers[i]);
        }

        qsort(marbleNumbers, numberOfMarbles, sizeof(int), comparador);

        for (i = 0; i < numberOfQueries; i++)
        {
            scanf("%d", &queryNumbers[i]);
        }

        printf("CASE# %d:\n", index + 1);
        for (i = 0; i < numberOfQueries; i++)
        {
            queryResult = sequencialSearch(marbleNumbers, numberOfMarbles, queryNumbers[i]) + 1;

            if (queryResult)
            {
                printf("%d found at %d\n", queryNumbers[i], queryResult);
            }
            else
            {
                printf("%d not found\n", queryNumbers[i]);
            }
        }


        index++;
        scanf("%d%d", &numberOfMarbles, &numberOfQueries);
    }

    return 0;
}

// https://www.galirows.com.br/meublog/programacao/utilizacao-funcao-qsort/
int comparador(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int sequencialSearch(int marbleNumbers[], int numberOfMarbles, int queryNumber)
{
    int i = 0, result = -1;

    for (; i < numberOfMarbles && result == -1; i++)
    {
        if (marbleNumbers[i] == queryNumber)
        {
            result = i;
        }
    }

    return result;
}