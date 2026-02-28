/***************************

Name: Jada Johnson
Date: February 21, 2023
Tutor: Mrs. Penrose-Whittaker
Subject: Programming 1
Question: Given the following information:
a. 1 USD = 153.5 JMD
b. 1 CAD = 115.00 JMD
c. 1 GBP = 186.90 JMD
d. 1 EURO = 167.80 JMD
Design a program that displays the above menu. It should then accept the currency type and amount. Determine the amount
in Jamaican currency based on the option inputted. Accept only the currencies listed. Assume correct entries.

***************************/

#include <stdio.h>
#include <string.h>

int main() {
    // declare variables as characters and real numbers
	char currencytype[10];
	float amount, jamaicancurrency;
	const float USDRATE = 153.5, CADRATE = 115.00, EURORATE = 167.80, GBPRATE = 186.90;
	
	printf("-- PROGRAMME TO CONVERT GBP, CAD, EURO OR USD TO JMD --\n");
	
	// provides menu to user
	printf("\nWelcome User! Here are the currencies you can from: \nUSD\nCAD\nGBP\nEURO\n");

    // prompts user and accepts user input
	printf("\nPlease indicate the currency you are converting from: ");
	scanf("%s", currencytype);
	
	printf("\nEnter the amount you want to convert to Jamaican currency: ");
	scanf("%f", &amount);

    // convert based on user's selected currency
	if (strcmp(currencytype, "USD") == 0|| strcmp(currencytype, "usd") == 0) {
		printf("Rate: 1 USD = %.2f JMD", USDRATE);
		jamaicancurrency = amount * USDRATE;
	} else if (strcmp(currencytype, "CAD") == 0 || strcmp(currencytype, "cad") == 0) {
		printf("Rate: 1 CAD = %.2f JMD", CADRATE);
		jamaicancurrency = amount * CADRATE;
	} else if (strcmp(currencytype, "GBP") == 0 || strcmp(currencytype, "gbp") == 0) {
		printf("Rate: 1 GBP = %.2f JMD", GBPRATE);
		jamaicancurrency = amount * GBPRATE;
	} else if (strcmp(currencytype, "EURO") == 0 || strcmp(currencytype, "euro") == 0) {
		printf("Rate: 1 EURO = %.2f JMD", EURORATE);
		jamaicancurrency = amount * EURORATE;
	} else {
        printf("\nInvalid Currency entered.");
        return 1; // Exit with error
    }

    // prints conversion result to 2 d.p.
	printf("\nTotal in Jamaican Dollars is: %.2f", jamaicancurrency);

	return 0;
}