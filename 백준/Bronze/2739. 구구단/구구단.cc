#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int n, i = 1;
	scanf("%d", &n);

	while (i <= 9) {
		printf("%d * %d = %d\n", n, i, n * i);
		i++;
	}
}