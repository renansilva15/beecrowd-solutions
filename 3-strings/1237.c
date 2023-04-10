#include <stdio.h>
#include <string.h>

int longestCommonSubstring(char *str1, char *str2, int sizeOfstr1, int sizeOfstr2);

int main()
{
    char str1[51] = {""}, str2[51] = {""};

    while (scanf(" %[^\n] %[^\n]", str1, str2) != EOF)
    {


        printf("%d\n", longestCommonSubstring(str1, str2, strlen(str1), strlen(str2)));
    }

    return 0;
}

int longestCommonSubstring(char *str1, char *str2, int sizeOfstr1, int sizeOfstr2)
{
    int i = 0, j = 0, x = 0, y = 0, sizeOfSubstring = 0, maxSizeOfSubstring = 0;

    for (; i < sizeOfstr1; i++)
    {
        for (j = 0; j < sizeOfstr2; j++)
        {
            for (x = i, y = j; y < sizeOfstr2; x++, y++)
            {
                if (str1[x] == str2[y])
                {
                    sizeOfSubstring++;
                }
                else
                {
                    maxSizeOfSubstring = sizeOfSubstring > maxSizeOfSubstring ? sizeOfSubstring : maxSizeOfSubstring;
                    sizeOfSubstring = 0;
                    break;
                }
            }
        }
    }

    return maxSizeOfSubstring;
}