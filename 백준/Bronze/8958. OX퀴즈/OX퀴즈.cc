#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

int main()
{
    int test;
    scanf("%d", &test);

    for (int i = 0; i < test; i++)
    {
        char s[80];

        scanf("%s", s);

        int len = strlen(s);

        int score[len];

        for (int j = 0; j < len; j++)
        {
            if (s[j] == 'O')
            {
                if (j >= 1 && s[j - 1] == 'O')
                {
                    score[j] = score[j - 1] + 1;
                }
                else
                {
                    score[j] = 1;
                }
            }
            else
            {
                score[j] = 0;
            }
        }
        int sum = 0;
        for (int k = 0; k < len; k++)
        {
            sum += score[k];
        }
        printf("%d\n", sum);
    }
}