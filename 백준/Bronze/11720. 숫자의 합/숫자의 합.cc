#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{

    int n, sum = 0;
    char num[101];

    scanf("%d", &n);
    scanf("%s", num);

    for (int i = 0; i < n; i++)
    {
        sum += num[i] - '0'; // '0'부터 '9'까지의 아스키코드 값을 정수 값으로 변환
    }
    printf("%d", sum);
}