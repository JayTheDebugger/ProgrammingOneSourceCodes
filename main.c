/*
Name: Jada Johnson
Date: February 6, 2023
Tutor: Arleen Penrose-Whittaker

START
    DECLARE num1, num2, sum as INTERGER
    PRINT "Please enter the first number"
    INPUT num1 //an alternative is READ
    PRINT "Please enter the second number"
    INPUT num2
    sum = num1 + num2
    PRINT "The sum of", num1, "and" num2, "is:", sum
STOP
*/

#include <stdio.h>

int main() {
    printf("-- PROGRAMME TO ADD TWO NUMBERS --\n\n"); //maps onto line 8
    
    int num1, num2, sum; //maps onto line 7
    
    printf("Please enter a number: "); //maps onto line 8
    scanf("%d", &num1); //maps onto line 9
    
    printf("Please enter another number: "); //maps onto line 10
    scanf("%d", &num2); //maps onto line 11
    
    sum = num1 + num2; //maps onto line 12
    printf("\nSum of %d and %d is: %d", num1, num2, sum); //maps onto line 13
    
    return 0;
}
