#include <stdio.h>
#pragma warning(disable : 4996)

bool is_prime(int num) // 소수 판별 함수
{
    if (num <= 1)
    {
        return false; // 1 이하의 수는 소수가 아님
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
            // 2부터 num의 제곱근까지 나누어 떨어지는 수가 있다면
            // 소수가 아님
        }
    }

    return true; // 위 조건을 모두 통과하면 소수
}

int main()
{
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);

    int total = 0;
    int min = -1;

    for (int i = m; i <= n; i++)
    {
        if (is_prime(i))
        {

            if (min == -1)
            {
                min = i;
            }
            total += i;
        }
    }

    if (total == 0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n%d\n", total, min);
    }
}