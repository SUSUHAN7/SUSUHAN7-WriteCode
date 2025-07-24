#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    int n;
    scanf("%d", &n);

    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    int min = num[0];
    int max = num[0];

    for (int j = 0; j < n; j++)
    {
        if (num[j] < min)
        {
            min = num[j];
        }
        if (num[j] > max)
        {
            max = num[j];
        }
    }
    printf("%d %d", min, max);
}