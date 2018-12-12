#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct PersonData {
	char name[45];
	int age;
};


int main() {
	struct PersonData reg;

	strcpy_s(reg.name, "hello");
	reg.age = 26;

	printf("My name is %s and my age is %d\n", reg.name, reg.age);

	system("Pause");
	return 0;
}