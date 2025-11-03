#include <stdio.h>

int main(void) {
	int a[2][2], b[2][2], sum[2][2];

	printf("Enter elements of first 2x2 matrix (row-wise):\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (scanf("%d", &a[i][j]) != 1) {
				printf("Invalid input\n");
				return 1;
			}
		}
	}

	printf("Enter elements of second 2x2 matrix (row-wise):\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (scanf("%d", &b[i][j]) != 1) {
				printf("Invalid input\n");
				return 1;
			}
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			sum[i][j] = a[i][j] + b[i][j];
		}
	}

	printf("Sum of the two 2x2 matrices is:\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}

	return 0;
}

