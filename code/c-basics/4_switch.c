#include <stdio.h>

int main() {
	int candidate_number;

	printf("Type a candidate number (1, 2 or 3): ");

	scanf_s("%d", &candidate_number);

	switch (candidate_number) {
	case 1: printf("Your vote is for Trhump and you make America great again!");
		break;
	case 2: printf("Your vote is for Lula and you colaborate with the PT! >:|");
		break;
	case 3: printf("Your vote is for Dennis Ritchie, the truth leader!");
		break;
	default: printf("Vote again modafoca!");
	}

	return 0;
}
