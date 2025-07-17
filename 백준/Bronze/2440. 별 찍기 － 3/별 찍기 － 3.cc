#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = n; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}
}