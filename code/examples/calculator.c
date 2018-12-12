// Build a program to calculate two numbers
// 	inputed by the user
// 	The user must be pass the number, the operator and other number.

#include <stdio.h>
#include <stdlib.h>

int main() {
	float firstNumber, seccondNumber;
	char mathOperator, continueCalc;

	do {
		printf("Enter the operation to calculate. Eg.: 5+5 \n");
		scanf_s("%f %c %f", &firstNumber, &mathOperator, 1, &seccondNumber);

		switch (mathOperator) {
			case '+': printf("Result: %f \n", firstNumber + seccondNumber);
				break;
			case '-': printf("Result: %f \n", firstNumber - seccondNumber);
				break;
			case '*': printf("Result: %f \n", firstNumber * seccondNumber);
				break;
			case '/': printf("Result: %f \n", firstNumber / seccondNumber);
				break;
		}

		printf("Do you want continue the operations? (Y/N)\n");
		scanf_s("%c", &continueCalc, 1);

	} while ((continueCalc == 'y') || (continueCalc == 'Y'));

	return 0;
}