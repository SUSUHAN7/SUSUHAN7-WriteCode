#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

int main()
{
    int alp[26] = {0};
    char s[101] = {0};

    scanf("%s", s);

    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (alp[s[i] - 'a'] == 0)
        {
            alp[s[i] - 'a'] = i + 1;
        }
    }

    for (int j = 0; j < 26; j++)
    {
        if (alp[j] == 0)
        {
            printf("-1 ");
        }
        else
        {
            printf("%d ", alp[j] - 1);
        }
    }
}