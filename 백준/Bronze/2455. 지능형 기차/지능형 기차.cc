#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    int off, on;
    int total = 0;
    int max = 0;

    for (int i = 0; i < 4; i++)
    {
        scanf("%d %d", &off, &on);

        total += -off + on;

        if (total > max)
        {
            max = total;
        }
    }
    printf("%d", max);
}