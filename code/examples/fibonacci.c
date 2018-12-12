#include <stdio.h>
#include <stdlib.h>

int Fib (int n1, int n2, int print, int limit) {
	printf("%d\n", n2);

	if (print == limit) {
		return(0);
	} else {
		Fib(n2, (n1 + n2), print++, limit);
	}
}

int main() {
	int number = 0;

	printf("Until which position print the numbers?");
	scanf_s("%d", &number);

	Fib(0, 1, 1, number);

	system("Pause");
	return 0;
}