#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j > i; j--) {
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			if (k == 0 || k == 2 * i || i == n - 1) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}