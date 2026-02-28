'''

Name: Jada Johnson
Tutor: Mrs. Penrose-Whittaker
Date: February 21, 2023
Subject: Programming 1
Question: A honey badger has a reputation of being the most fearless animal in the world. Despite its small size, 
it has ferocious defensive abilities. It also has an aggressive nature. 
Design a program that puts the honey badger at cross-roads. If it turns left, it is a face off with a lion. 
If it turns right, it is a face off with a rattlesnake. If it goes up the road it faces an uakari. 
Finally, if it turns down the road it is a face off with a dhole. Using this information, 
accept a single character value in the variable direction. 

Display one of the messages below based on the direction entered: 
a.	If direction is ‘L’ – "Badger VS Lion"
b.	If direction is ‘R’ – "Badger VS Rattlesnake"
c.	If direction is ‘U’ – "Badger VS Uakari"
d.	If direction is ‘D’ – "Badger VS Dhole"

If direction is any other value, output "Invalid direction!"

Test Data: u

'''
print("-- PROGRAMME USED TO DIRECT THE HONEY BADGER --\n")

# loops so that a valid answer is entered
while True:
    # gets user input and declare it as a char, while also making it uppercase
    direction = input("-- HONEY BADGER'S DIRECTIONS --" + 
                      "\nL is Left \nR is Right \nU is Up \nD is Down " +
                      "\n\nPlease enter the honey badger's direction: ").upper()
    # depends on user's input; if l is entered, lion, if r, then rattlesnake, if u, then uakari, and finally, if d, dhole
    if direction == 'L':
        print("\nThis direction leads you to the Badger vs Lion")
        break
    elif direction == 'R':
        print("\nThis direction leads you to the Badger vs Rattlesnake")
        break
    elif direction == 'U':
        print("\nThis direction leads you to the Badger vs Uakari")
        break
    elif direction == 'D':
        print("\nThis direction leads you to the Badger vs Dhole")
        break
    else:
        print("\nERROR: Invalid direction! Please enter either L, R, U, or D.\n")
