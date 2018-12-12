#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct People {
	char name[30];
	char fone[20];
	char email[70];
};

struct People data[100];

int menu() {
	int opt;

	printf("Enter 1 to add\n");
	printf("Enter 2 to update\n");
	printf("Enter 3 to list\n");
	printf("Enter 4 to exit\n");

	scanf_s("%d", &opt);

	return(opt);
}

void add(int *q) {
	if (*q > 99) {
		printf("Is not possible add because exceded 100 items\n");
	}
	else {
		printf("Enter name, fone and email\n");
		scanf_s("%s", &data[*q].name);
		scanf_s("%s", &data[*q].fone);
		scanf_s("%s", &data[*q].email);

		*q++;
	}
}

void list(int q) {
	int x = 0;

	for (x; x < q; x++) {
		printf("Name: %s, Fone: %s, eMail: %s\n", data[q].name, data[q].fone, data[q].email);
	}
}

void update(int q) {
	char name[30];
	int aux = -1;
	int x = 0;

	printf("Enter the people name to update data: ");
	scanf_s("%d", &name);

	for (x; x < q; x++) {
		if (strcmp(data[x].name, name) == 0) {
			aux = x;
			break;
		}

		if (aux == -1) {
			printf("Name not localized\n");
		}
		else {
			printf("Enter the Name, Fone and eMail: \n");
			scanf_s("%s %s %s", data[aux].name, data[aux].fone, data[aux].email);
		}
	}
}

int main() {
	int opt = 0;
	int amount = 0;

	do {
		opt = menu();

		switch (opt) {
		case 1: add(&amount); break;
		case 2: update(amount); break;
		case 3: list(amount); break;
		}
	} while (opt != 4);

	system("Pause");
	return 0;
}