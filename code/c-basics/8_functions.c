#include <stdio.h>
#include <stdlib.h>

char hello(int value) {
	return(value);
}

int main() {
	int lol = hello(1);

	printf("%d", lol);

	system("Pause");
	return 0;
}