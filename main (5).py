'''

Name: Jada Johnson
Date: February 17, 2023
Tutor: Arleen Penrose-Whittaker

'''

USDRATE = 153.5
CADRATE = 115.00
EURORATE = 167.80 
GBPRATE = 186.90

print ("-- PROGRAMME TO CONVERT GBP, CAD, EURO OR USD TO JMD --")

print ("\nWelcome User! Here are the currencies you can from: \nUSD\nCAD\nGBP\nEURO\n")

# accepts user input and declares it as string
currencytype = str(input("Please indicate the currency you are converting from: "))

# checks user input, and converts based on their selected currency
if currencytype == 'USD' or currencytype == 'usd':
        print ("1 USD =", USDRATE, "JMD")
        amount = float(input("Enter the amount you want to convert to Jamaican currency: "))
        jamaicancurrency = amount * USDRATE
else:
    if currencytype == 'CAD' or currencytype == 'cad':
        print ("1 CAD =", CADRATE, "JMD")
        amount = float(input("Enter the amount you want to convert to Jamaican currency: "))
        jamaicancurrency = amount * CADRATE
    else:
        if currencytype == 'GBP' or currencytype == 'gbp':
            print ("1 GBP =", GBPRATE, "JMD")
            amount = float(input("Enter the amount you want to convert to Jamaican currency: "))
            jamaicancurrency = amount * GBPRATE
        else:
            if currencytype == 'EURO' or currencytype == 'euro':
                print ("1 EURO =", EURORATE, "JMD")
                amount = float(input("Enter the amount you want to convert to Jamaican currency: "))
                jamaicancurrency = amount * EURORATE

# prints conversion to 2 d.p.
print("\nTotal in Jamaican dollars is:", "{:.2f}".format(jamaicancurrency))