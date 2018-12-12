#include <stdio.h>
#include <stdlib.h>

int main() {
	int vect[20] = { 3,7,8,10,13,15,18,22,26,27,32,35,43,47,53,57,62,63,72,84 };
	int x = 0, aux = 0;

	printf("Enter a number to search in vector: ");
	scanf_s("%d", &aux);

	for (x; x < 20; x++) {
		if (vect[x] == aux) {
			break;
		}
	}


	if (x < 20) {
		printf("The value is on %d position of vector.\n", x);
	}
	else {
		printf("The value entered is not on the vector.\n");
	}
	system("Pause");
	return 0;
}