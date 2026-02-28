"""

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

"""
print ("-- PROGRAMME TO ADD TWO NUMBERS --\n")

# accepts user inputs as integers
num1 = int(input("Please enter the 1st Number: "))

num2 = int(input("Please enter the 2nd Number: "))

# add numbers and stores the result in sum
sum = (num1 + num2)

print ("\nResult of Sum:", sum)