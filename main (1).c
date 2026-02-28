/***************************

Name: Jada Johnson
Date: February 21, 2023
Tutor: Mrs. Penrose-Whittaker
Subject: Programming 1
Continuous Assessment 3 Question 1

***************************/

#include <stdio.h>
#include <stdbool.h>

int main() {
	// declares variable as characters
	char direction, L, R, D, U;

	printf("-- PROGRAMME USED TO DIRECT THE HONEY BADGER --\n");

    // loops until a valid character is entered
	while(true) {
		// accepts user's input
		printf("\n-- HONEY BADGER'S DIRECTIONS -- "
		       "\nL is Left \nR is Right \nU is Up \nD is Down "
		       "\n\nPlease enter the honey badger's direction: ");
		// leading space gets rid of any newline character from previous input
		scanf(" %c", &direction);

		// depends on user's input; if l is entered, lion, if r, then rattlesnake, if u, then uakari, and finally, if d, dhole
		if (direction == 'L' || direction == 'l') {
			printf("This direction leads you to the Badger vs Lion");
		} else if (direction == 'R' || direction == 'r') {
			printf("This direction leads you to the Badger vs Rattlesnake");
		} else if (direction == 'U' || direction == 'u') {
			printf("This direction leads you to the Badger vs Uakari");
		} else if (direction == 'D' || direction == 'd') {
			printf("This direction leads you to the Badger vs Dhole");
		} else {
			printf("\nERROR: Invalid direction! Please enter either L, R, U, or D.\n");
		}
	}

	return 0;
}
