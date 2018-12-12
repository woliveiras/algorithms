#include <stdio.h>

int main() {
	int age;

	printf("Type your age: ");
	scanf("%d", &age);

	if(age > 15)
		printf("You can vote!");

	printf("You can't vote... Sorry. :(");

	return 0;
}
