/******************************************************************************

Name: Jada Johnson
Tutor: Mrs. Penrose-Whittaker
Date: February 21, 2023
Subject: Programming 1
Question: The prisoner's dilemma is a concept that describes a situation involving two people. The prisoners are crossed-examined
in separate rooms, with no means to communicate. How they respond to interrogation will determine whether they cooperate with each other.
But this is unbeknown to them. If they both cooperate, they kept silent about the crime they committed. In that case,
they each get a one-year sentence in jail. If one testifies and the other does not, the person who confesses gets to walk free of the charges.
The person who did not gets convicted for five years. Finally, if both testified against each other, each gets three years in jail.
Design a program that accepts responses from two prisoners. The program should collect each prisoner's response.
It should prompt whether he/she is willing to cooperate. Accept one of these characters for their responses. 'S' for remaining
silent, 'T' for testify. Based on their response, determine if:

a.	Prisoner A walks free, and Prisoner B gets five (5) years in jail
b.	Prisoner B walks free, and Prisoner A gets five (5) years in jail
c.	Prisoner A and Prisoner B each gets one year in jail
d.	Prisoner A and Prisoner B each gets three years in jail

Test Data 1: s, t
Test Data 1: S, S
Test Data 1: T, s

*******************************************************************************/

#include <stdio.h>

int main() {
	char prisonerARes, prisonerBRes;
	
    printf("-- PROGRAMME TO DETERMINE PRISONERS' FREEDOM --\n");

	printf("\nPrisoner A, you would like to remain (S)ilent or (T)estify: ");
	scanf(" %c", &prisonerARes);
	printf("Prisoner B, you would like to remain (S)ilent or (T)estify: ");
	scanf(" %c", &prisonerBRes);

	if ((prisonerARes == 'S' || prisonerARes == 's') && (prisonerBRes == 'T' || prisonerBRes == 't'))
		printf("\nPrisoner B walks free, and Prisoner A gets five years in jail\n");
	else if ((prisonerARes == 'T' || prisonerARes == 't') && (prisonerBRes == 'S' || prisonerBRes == 's'))
		printf("\nPrisoner A walks free, and Prisoner B gets five years in jail\n");
	else if ((prisonerARes == 'T' || prisonerARes == 't') && (prisonerBRes == 'T' || prisonerBRes == 't'))
		printf("\nPrisoner A and Prisoner B each gets three years in jail\n");
	else if ((prisonerARes == 'S' || prisonerARes == 's') && (prisonerBRes == 'S' || prisonerBRes == 's'))
		printf("\nPrisoner A and Prisoner B each gets one year in jail\n");

	return 0;
}
