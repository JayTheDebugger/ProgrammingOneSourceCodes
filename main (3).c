/*****************************************************************************

Name: Jada Johnson
Tutor: Mrs. Penrose-Whittaker
Date: March 14, 2023
Subject: Programming 1
Question: Accept the GPA for each person in a class of 10 students.
Find and display the average GPA for the class.

Test Data: 3.4, 2.3, 2.7, 4.5, 3.9, 3.3, 4.6, 3.0, 3.6, 1.5 = 3.28

*****************************************************************************/

#include <stdio.h>
#include <stdbool.h>

int main() {
	// declares variables (and constant) as real numbers and integers
	float gpa, overallGPA = 0;
	int counter;
	const int CLASS_SIZE = 10;

	printf("-- PROGAMME TO DETERMINE A CLASS' AVERAGE GPA --\n");

	// loops until class size is met, allowing each student's GPA to be entered
	for(counter = 1; counter <= CLASS_SIZE; counter++) {
        // Use a loop that always runs at least once
        do {
            printf("\nProcessing Student %d", counter);
            printf("\nPlease enter Student's %d GPA: ", counter);
            scanf("%f", &gpa);

            // Checks if GPA is within range
            if (gpa >= 0.0 && gpa <= 5.0) {
                // Adds student's gpa to the overall gpa on each iteration
                overallGPA += gpa; 
                break; // Valid input, move to next student
            } else {
                printf("ERROR: Invalid input! Please enter a value between 0.0 and 5.0.\n");
            }
        } while (1); // Keep looping until the 'break' is hit
    }

	printf("\nAverage GPA of the class is %.2f", overallGPA / CLASS_SIZE);

	return 0;
}