#include <stdio.h>

void main() {
	int count = 0;
	int a = 0;

	while (count <= 10) {
		a += 3;
		count++;
		printf("%x, %d\n", count, a);
	}
}