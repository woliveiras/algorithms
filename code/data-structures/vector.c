#include <stdio.h>
#include <stdlib.h>

int main() {
	int numbers[3], index;

	for (index = 0; index <= 2; index++) {
		printf("Enter the %d° number: ", index + 1);
		scanf_s("%d", &numbers[index]);
	}

	for (index = 0; index <= 2; index++) {
		printf("Number %d = %d\n", index + 1, numbers[index]);
	}

	system("Pause");
	return 0;
}