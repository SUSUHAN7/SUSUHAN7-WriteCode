#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		for (int k = (2 * n) - 2 * (i + 1); k > 0; k--) {
			printf(" ");
		}
		for (int l = 0; l <= i; l++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = n - 1; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			printf("*");
		}
		for (int k = 0; k < 2 * n - 2 * i; k++) {
			printf(" ");
		}
		for (int l = i; l > 0; l--) {
			printf("*");
		}
		printf("\n");
	}
}