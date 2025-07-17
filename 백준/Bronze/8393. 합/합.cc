#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int n, i{}, sum{};
	scanf("%d", &n);

	while (i <= n) {
		sum += i;
		i++;
	}
	printf("%d", sum);
}