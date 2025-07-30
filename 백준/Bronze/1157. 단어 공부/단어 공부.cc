#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

int main()
{
    char s[1000001];
    int alp[27] = {0};
    char result; // 최종 출력 문자

    scanf("%s", s);
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            alp[s[i] - 'a']++;
        }
        else
        {
            alp[s[i] - 'A']++;
        }
    }
    int max = 0;

    for (int j = 0; j < 26; j++)
    {
        if (alp[j] == max)
        {
            result = '?';
        }
        else if (alp[j] > max)
        {
            max = alp[j];
            result = 'A' + j;
        }
    }
    printf("%c", result);
}