'''

Name: Jada Johnson
Date: February 13, 2023
Tutor: Arleen Penrose-Whittaker

Python Practice

'''
print("-- PROGRAMME TO OBTAIN A COUNTRY --")

# loops until a valid country code is entered
while True: 
    # accepts user input as char
    countyCode = input("\nEnter county code: ")
    
    match countyCode:
        case 'C' | 'c':
            print ("\nCounty: Cornwall")
            break
        case 'M' | 'm':
            print ("\nCounty: Middlesex")
            break
        case 'S' | 's':
            print ("\nCounty: Surrey")
            break
        case _:
            print("Invalid county code! Please enter uppercase or lowercase C, M, and S!")

result = 0;