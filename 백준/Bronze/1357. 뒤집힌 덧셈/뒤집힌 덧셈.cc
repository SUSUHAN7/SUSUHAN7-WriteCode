#include <stdio.h>
#pragma warning(disable : 4996)
#include <string.h>
#include <stdlib.h>

int Rev(int n)
{
    char s[1001];
    int len;
    int r = 0; // 뒤집은 결과 정수

    sprintf(s, "%d", n);
    len = strlen(s); // 문자열 길이 계산

    for (int i = len - 1; i >= 0; i--)
    {
        r *= 10;
        r += s[i] - '0';
    }
    return r;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    x = Rev(x);
    y = Rev(y);

    printf("%d\n", Rev(x + y));
}