#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("Hello World, Judge %d!\n", i + 1);
    }
}