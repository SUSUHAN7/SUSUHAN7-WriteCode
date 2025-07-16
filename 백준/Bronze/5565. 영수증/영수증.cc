#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    int total;       // 10권의 총 가격
    int num[9] = {}; // 책 9권의 가격
    int sum = 0;     // 책 9권의 가격 합

    scanf("%d\n", &total);

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        sum += num[i];
    }

    printf("%d", total - sum);
}