#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    int n, count = 0;
    int num[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);

        for (int j = 2; j <= num[i]; j++)
        {
            if (num[i] == j)
            {
                count++;
            }
            else if (num[i] % j == 0)
            {
                break;
            }
        }
    }
    printf("%d", count);
}