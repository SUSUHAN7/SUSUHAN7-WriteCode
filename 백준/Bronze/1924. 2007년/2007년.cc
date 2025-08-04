#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    int x, y;
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *week[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    // char *는 7개의 문자열을 가리키는 포인터 배열

    scanf("%d %d", &x, &y);

    int total = 0;
    for (int i = 1; i < x; i++)
    {
        total += days[i];
    }
    total += y;

    printf("%s\n", week[total % 7]);

    return 0;
}