#include <stdio.h>
#include <stdlib.h>

void main() {
	int count = 0;
	int max = 20;

	do {
		printf("%d\n", count);
		count++;
	} while (count <= max);

	system("Pause");
}