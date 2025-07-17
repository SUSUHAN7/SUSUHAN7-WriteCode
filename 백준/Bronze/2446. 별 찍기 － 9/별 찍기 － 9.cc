#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = n; i > 0; i--) {
		for (int j = 0; j < n - i; j++) {
			printf(" ");
		}
		for (int k = 2 * i - 1; k > 0; k--) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 2; j > i; j--) {
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 3; k++) {
			printf("*");
		}
		printf("\n");
	}
}