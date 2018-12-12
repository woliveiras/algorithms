#include <stdio.h>

int main() {
	int count;
	char colors[5][10]; // A vector of strings with 5 positions of 10 characters

	for (count = 0; count <= 5; count++) {
		printf("Enter the color %d", count);
		scanf_s("%c", &colors[count], 10);
	}

	return 0;
}