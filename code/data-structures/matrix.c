#include <stdio.h>

int main() {
	int x, y, matrix[3][3];

	for (x = 0; x < 3; x++) {
		for (y = 0; y < 3; y++) {
			matrix[x][y] = x + y;
		}
	}

	for (x = 0; x < 3; x++) {
		for (y = 0; y < 3; y++) {
			printf("%d", matrix[x][y]);;
		}
		printf("\n");
	}

	return 0;
}