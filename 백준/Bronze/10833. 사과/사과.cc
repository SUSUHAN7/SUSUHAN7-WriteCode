#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    int test;
    int stu, app;
    int sum = 0;
    scanf("%d", &test);

    for (int i = 0; i < test; i++)
    {
        scanf("%d %d", &stu, &app);

        if (app >= stu)
        {
            sum += app % stu;
        }
        else
        {
            sum += app;
        }
    }
    printf("%d", sum);
}