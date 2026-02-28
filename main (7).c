/******************************************************************************

Name: Jada Johnson
Date: March 28, 2023
Tutor: Mrs. Penrose-Whittaker
Technologist: Mr. Manning
Lab Test 2

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    // declares variables as integers, reeal numbers and characters
	int moduleCode, moduleCount = 0, totalCredits = 0, credits;
	float gradePoint, totalPoints = 0.0, points, gpa;
	char letterGrade, moduleName[50];

	printf("== PROGRAMME TO CHECK MODULE'S STATS ==\n");

    // accepts user input
	printf("\nPlease enter Module Code: ");
	scanf("%d", &moduleCode);

	while (moduleCode != 0) {
	    // accepts user input w/ spaces
		printf("Please enter Module Name: ");
		scanf(" %[^\n]", moduleName);

        // accepts user input
		printf("Please enter Module Credits: ");
		scanf("%d", &credits);

        // accepts user input
		printf("Please enter Letter Grade [A, B, C, D]: ");
		scanf(" %c", &letterGrade);
		letterGrade = toupper(letterGrade); // makes user's input uppercase

        // assigns letter grade based on grade point
		if (letterGrade == 'A')
			gradePoint = 4.0;
		else if (letterGrade == 'B')
			gradePoint = 3.0;
		else if (letterGrade == 'C')
			gradePoint = 2.0;
		else if (letterGrade == 'D')
			gradePoint = 1.0;
		else
			gradePoint = 0.0;

		points = gradePoint * credits;
		printf("\n== MODULE'S DETAILS ==\nModule Code: %d \nModule Name: %s \nLetter Grade: %c \nGrade Point: %.2f\n", moduleCode, moduleName, letterGrade, gradePoint);

        // increment total points, credits, and modules
		totalPoints += points;
		totalCredits += credits;
		moduleCount += 1;
		
		printf("\n== SYSTEM: Module recorded successfully! ==\n");

		printf("\n== ENTER 0 TO EXIT ==\n");

		printf("\nPlease enter the next Module Code: ");
		scanf("%d", &moduleCode);
	}
    
    // prints results if credits and modules count is greater than 0
	if (moduleCount > 0 && totalCredits > 0) {
		gpa = totalPoints / totalCredits;

		printf("\nNumber of Modules: %d\n", moduleCount);
		printf("Total Credits: %d\n", totalCredits);
		printf("Total Points: %.2f\n", totalPoints);
		printf("Calculated GPA: %.2f\n", gpa);
	}
		
	printf("\n=== Exiting System ===");

	return 0;
}