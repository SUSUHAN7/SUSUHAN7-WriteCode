#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    int arr[8];
    int count = 0;

    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (arr[0] == 1)
    {
        for (int i = 1; i < 8; i++)
        {
            if (arr[i] == i + 1)
            {
                count++;
            }
        }
        if (count == 7)
        {
            printf("ascending");
        }
        else
        {
            printf("mixed");
        }
    }
    else if (arr[0] == 8)
    {
        for (int i = 1; i < 8; i++)
        {
            if (arr[i] == 8 - i)
            {
                count++;
            }
        }
        if (count == 7)
        {
            printf("descending");
        }
        else
        {
            printf("mixed");
        }
    }
    else
    {
        printf("mixed");
    }
}