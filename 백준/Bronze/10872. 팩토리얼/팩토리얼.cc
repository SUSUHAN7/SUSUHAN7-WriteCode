#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    int num;
    int sum = 1;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        sum *= i;
    }
    printf("%d", sum);
}