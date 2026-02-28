/******************************************************************************

Name: Jada Johnson
Tutor: Mrs. Penrose-Whittaker
Date: February 28, 2023
Subject: Programming 1
Question: INSURANCE PREMIUM

*******************************************************************************/
#include <stdio.h>

int main() {

	char name[50];
	int age, riskcode;

	printf("-- INSURANCE PREMIUM PROGRAMME --\n");

	// collects user's name
	printf("\nPlease enter your full name: ");
	scanf(" %[^\n]", name);

	// collects user's age
	printf("Please enter your age: ");
	scanf("%d", &age);

	while(riskcode < 1 || riskcode > 2) {
		// prints code options
		printf("\nCode 1 = High-risk driver with recent moving violations."
		       "\nCode 2 = Low-risk driver with no recent moving violations.");

		// accepts user's risk code
		printf("\nPlease enter your risk code: ");
		scanf("%d", &riskcode);

		switch(riskcode) {
		case 1:
			if (age < 25)
				printf("\nCost of Insurance: $100000\n");
			else if (age >= 25)
				printf("\nCost of Insurance: $800000\n");
			else
				printf("\nERROR: Invalid age entered\n");
			break;

		case 2:
			if (age >= 25)
				printf("\nCost of Insurance: $650000\n");
			else if (age < 25)
				printf("\nCost of Insurance: $500000\n");
			else
				printf("\nERROR: Invalid age entered\n");
			break;

		default:
			printf("\nERROR: RISK CODE IS INVALID! Please enter either 1 or 2!\n");
		}
	}

	// prints user's details
	printf("\n-- USER'S DETAILS -- \nName: %s\nAge: %d\nRisk Code: %d\n", name, age, riskcode);

	return 0;
}