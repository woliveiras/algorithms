#include <stdio.h>
#include <stdlib.h>

int Fat(int x) {
	int y = 0;

	if (x == 1) {
		y = 1;
	} else {
		y = Fat(x-1) * x;
	}

	return(y);
}

int main() {
	int number = 0;
	int result = 0;

	printf("Enter a number to calculate the factorial: ");
	scanf_s("%d", &number);

	result = Fat(number);
	printf("\n\n The factorial of %d is %d\n", number, result);

	system("Pause");
	return 0;
}