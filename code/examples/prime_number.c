#include <stdio.h>
#include <stdlib.h>

char prime(int number) {
	int x = 0;

	for (x = 2; x < number; x++) {
		if ((number % x) == 0) {
			return('N');
		}
		return('Y');
	}
}

int main() {
	int number = 0;

	printf("Enter a number:");

	scanf_s("%d", &number);

	if (prime(number) == 'Y') {
		printf("Yes! The %d is prime.\n", number);
	}
	else {
		printf("No. The %d is not prime.\n", number);
	}

	system("Pause");
	return 0;
}