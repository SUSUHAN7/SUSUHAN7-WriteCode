#include <stdio.h>
#pragma warning(disable : 4996)

int Euclidean(int a, int b) // 유클리드 호제법을 이용한 최대공약수 계산
{

    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main()
{
    int N;       // 링의 개수
    int R[1001]; // 링의 반지름

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d\n", &R[i]);
    }

    for (int i = 1; i < N; i++)
    {
        int value = 0;
        value = Euclidean(R[0], R[i]); // R[0]은 언제나 기준이 되는 수

        printf("%d/%d\n", R[0] / value, R[i] / value);
    }
}