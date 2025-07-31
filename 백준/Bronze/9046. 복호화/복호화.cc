#include <stdio.h>
#include <iostream> // input, output
#include <string.h>
using namespace std;
#pragma warning(disable : 4996)

// 다시한번 풀어보기

int main()
{
    int test;
    scanf("%d", &test);
    getchar(); // 버퍼 비우기

    for (int i = 0; i < test; i++)
    {
        char s[256];
        int alp[26] = {0}; // 알파벳 수

        cin.getline(s, 256); // 공백 포함 문자열 입력

        int len = strlen(s);
        int max_count = 0;
        int max_index = 0;

        for (int j = 0; j < len; j++)
        {
            if (s[j] >= 'a' && s[j] <= 'z')
            {
                alp[s[j] - 'a']++;
            }
        }

        int samesame = -1;

        for (int j = 0; j < 26; j++)
        {
            if (alp[j] > max_count)
            {
                max_count = alp[j];

                max_index = j;
            }
        }

        for (int j = 0; j < 26; j++)
        {
            if (alp[j] == max_count)
            {
                samesame++; // 동률인 경우
            }
        }

        if (samesame)
        {
            printf("?\n");
        }

        else
        {
            printf("%c\n", max_index + 'a');
        }
        /* char q[2];
        q[0] = max_index + 'a';
        printf("%c\n", q[0]); */
    }
}