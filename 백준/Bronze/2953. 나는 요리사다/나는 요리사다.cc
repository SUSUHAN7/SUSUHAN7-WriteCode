#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    int arr[5][4] = {0};
    int index;
    int max = 0;
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {

        sum = 0;

        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);

            sum += arr[i][j];
        }

        if (sum > max)
        {
            max = sum;
            index = i + 1;
        }
    }
    printf("%d %d", index, max);
}