'''

Name: Jada Johnson
Tutor: Mrs. Penrose-Whittaker
Date: March 14, 2023
Subject: Programming 1
Question: Accept the GPA for each person in a class of 10 students. 
Find and display the average GPA for the class.
Test Data: 3.4, 2.3, 2.7, 4.5, 3.9, 3.3, 4.6, 3.0, 3.6, 1.5 = 3.28

'''
CLASS_SIZE = 10
overallGPA = 0

print ("-- PROGAMME TO DETERMINE A CLASS' AVERAGE GPA --")

# loops through students in the class size
for student in range(CLASS_SIZE):
    print ("\nProccessing Student", student+1)
    while True:
        # takes user input, and  and stores it in gpa
        gpa = float(input('Please enter the student\'s GPA: '))
            
        if 0.0 <= gpa <= 5.0:
            overallGPA += gpa # Adds student's gpa to the overall gpa on each iteration
            break  # exit the while loop and move to the next student
        else:
            print("\nERROR: Invalid input! Please enter a value between 0.0 and 5.0.")
        
# stores the average for print 
average = overallGPA / CLASS_SIZE
    
print ("\nThe average GPA of the class is", "{:.2f}".format(average))