#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

int main()
{
    char s[5][16] = {0};

    for (int i = 0; i < 5; i++)
    {
        scanf("%s", s[i]);
    }

    for (int j = 0; j < 15; j++)
    {
        for (int k = 0; k < 5; k++)
        {
            if (s[k][j] != '\0')
            {
                printf("%c", s[k][j]);
            }
        }
    }
}