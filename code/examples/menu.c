#include <stdio.h>
#include <stdlib.h>

int menu() {
	int option;

	printf("Type 1 for Add\n");
	printf("Type 2 for Update\n");
	printf("Type 1 for Delete\n");

	scanf_s("%d", &option);

	return(option);
}

int main() {
	
	switch(menu()) {
		case 1 : printf("Added\n"); break;
		case 2 : printf("Updated\n"); break;
		case 1 : printf("Deleteted\n"); break;
	}

	system("Pause");
	return 0;
}