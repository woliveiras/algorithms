#include <stdio.h>

int main() {
	int age;
	char option;

	printf("Enter your age and option (y/n) if vote in the next elections: ");
	scanf_s("%d %c", &age, &option);

	if ((option == 'y') || (option == 'Y')) {
		if (age > 15) {
			printf("You can vote!\n");
			if (age > 18) {
				printf("You can apply for next elections!\n");
				if (age > 64) {
					printf("You're not obligated to vote\n");
				}
			}
		}
		else {
			printf("You can't vote because don't have age... Sorry. :(\n");
		}
	}

	printf("Thanks!");

	return 0;
}
