#include <stdio.h>
#include <stdlib.h>

int binary_search(int vect[], int start, int end, int number) {
	int pivo = 0;

	if (start > end) {
		return(-1);
	}

	pivo = ((end - start) / 2) + start;

	if (number > vect[pivo]) {
		return (binary_search(vect, pivo + 1, end, number));
	}


	if (number < vect[pivo]) {
		return (binary_search(vect, start, pivo - 1, number));
	}

	return(pivo);
}

int main() {
	int vector[20] = { 3,7,8,10,13,15,18,22,26,27,32,35,43,47,53,57,62,63,72,84 };
	int num = 0, pos = 0;

	printf("Enter a number to search: ");
	scanf_s("%d", &num);

	pos = binary_search(vector, 0, 19, num);

	if (pos == -1) {
		printf("The number is not on the list.\n");
	} else {
		printf("The number is on %d position.\n", pos);
;	}

	system("Pause");
	return 0;
}