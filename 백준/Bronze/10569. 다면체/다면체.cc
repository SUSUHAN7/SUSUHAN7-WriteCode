#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    int test;
    scanf("%d", &test);

    for (int i = 0; i < test; i++)
    {
        int V, E;
        scanf("%d %d", &V, &E);

        int Side = 2 + (E - V);

        printf("%d\n", Side);
    }
}