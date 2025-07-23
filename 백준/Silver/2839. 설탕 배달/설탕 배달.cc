#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    int num, count = 0;
    scanf("%d", &num);

    while (1)
    {
        if (num % 5 == 0)
        {
            count += num / 5;
            break;
        }

        num -= 3;
        count++;

        if (num <= 0)
        {
            break;
        }
    }

    if (num < 0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", count);
    }
    return 0;
}