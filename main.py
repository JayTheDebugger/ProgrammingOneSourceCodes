"""

Name: Jada Johnson (2209658)
Tutor: Mrs. Penrose-Whittaker
Date: March 13, 2023
Subject: Programming 1
Question: A program is to be designed to use the computer as a calculator. The user first inputs a code: 
a. 1 for addition
b. 2 for subtraction
c. 3 for multiplication
d. 4 for division.

The user then inputs two numbers for the operation. The program should determine the answer and display the result. Use a 
post-test loop to validate the users input, the programme should keep prompting the user to enter a value 
between 1 and 4 inclusive for as long as an invalid input is entered.

Test Data 1: num1 = 7.45, num2 = 33.95, code = 5, code = 4
Test Data 2: num1 = 5.67, num2 = 45.34, code = -1, code = 2
Test Data 3: num1 = 2.00, num2 = 3.00, code = 1

"""

# initialize code to 0
code = 0

print("-- PROGRAM TO DO BASIC MATH OPERATIONS --")

# prompts user for first number and makes it a float
num1 = float(input("\nPlease enter a number: "))
# prints the number entered
print("Number 1: ", num1)

# prompts user for first number and makes it a float
num2 = float(input("\nPlease enter another number: "))
# prints the number entered
print("Number 2: ", num2)

# loops until an valid number is entered
while True:
    print("\n-- AVAILABLE OPERATIONS --")
    print("\n1:= Addition\n2:= Subtraction\n3:= Multiplication\n4:= Division")

    # collects user input and declares it as an int
    code = int(input("\nPlease enter the number of your desired operation: "))

    # if code is 1, do addition and print result
    if code == 1:
        result = num1 + num2
        print("The result is", "{:.2f}".format(result))
    # if code is 2, do subtraction and print result
    else:
        if code == 2:
            result = num1 - num2
            print("The result is", "{:.2f}".format(result))
        # if code is 3, do multiplication and print result
        else:
            if code == 3:
                result = num1 * num2
                print("The result is", "{:.2f}".format(result))
            # if code is 4, do division and print result
            else:
                if code == 4:
                    result = num1 / num2
                    print("The result is", "{:.2f}".format(result))
    
    if code < 1 or code > 4:
        print(
            "Invalid input! Please re-enter the number; using any one of the numbers: 1, 2, 3, or 4!"
        )
    else:
        break
