#include <stdio.h>

void main() {
	int age;

	printf("Type your age: ");
	scanf("%d", &age);

	if(age > 15){
		printf("You can vote!");
    } else {
        printf("You can't vote because don't have age... Sorry. :(");
    }

	printf("Thanks!");
}
