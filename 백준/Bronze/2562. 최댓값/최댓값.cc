#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int s[9];
	for (int i = 0; i < 9; i++) {
		scanf("%d", &s[i]);
	}
	int max = 0;
	int total;
	for (int i= 0; i < 9; i++) {
		if (s[i] > max) {
			max = s[i];
			total = i+1;
		}
	}
	printf("%d\n", max);
	printf("%d\n", total);
}