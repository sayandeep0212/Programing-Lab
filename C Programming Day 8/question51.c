#include <stdio.h>

int main() {
	int size;
	printf("Enter the size of array: ");
	if (scanf("%d", &size) != 1 || size <= 0) {
		printf("Invalid size\n");
		return 1;
	}

	int arr[size];
	printf("Enter %d elements:\n", size);
	for (int i = 0; i < size; i++) {
		if (scanf("%d", &arr[i]) != 1) {
			printf("Invalid input\n");
			return 1;
		}
	}

	int even_count = 0, odd_count = 0;
	printf("Even elements (value:index): ");
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			even_count++;
			printf("%d(%d) ", arr[i], i);
		}
	}
	printf("\n");

	printf("Odd elements (value:index): ");
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 != 0) {
			odd_count++;
			printf("%d(%d) ", arr[i], i);
		}
	}
	printf("\n");

	printf("Total even: %d\n", even_count);
	printf("Total odd: %d\n", odd_count);

	return 0;
}
