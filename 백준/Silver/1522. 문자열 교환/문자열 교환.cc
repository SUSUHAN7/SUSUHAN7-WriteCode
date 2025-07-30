#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

int main()
{
    char s[1001];
    scanf("%s", s);

    int len = strlen(s);
    int a_count = 0;

    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'a')
        {
            a_count++;
        }
    }

    int min = len;

    for (int i = 0; i < len; i++)
    {
        int b_count = 0;

        for (int j = 0; j < a_count; j++)
        {
            if (s[(i + j) % len] == 'b')
            {
                b_count++;
            }
        }
        if (b_count < min)
        {
            min = b_count;
        }
    }
    printf("%d\n", min);
}