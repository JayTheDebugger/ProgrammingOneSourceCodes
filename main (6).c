// Name: Jada Johnson
// Tutor: Mrs. Penrose-Whittaker
// Date: February 28, 2023
// Subject: Programming 1
// Question: BANK TRANSACTION

#include <stdio.h>
#include <ctype.h>

int main() {
    // declares variables as real numbers or characters
    float bal = 30000, d_amount, w_amount, newBal = 0;
    char action;

    printf("== BANK TRANSACTION ==\n");

    printf("\nWelcome User! What can we do for you, today? \n"
           "\n(B)alance\n(D)eposit\n(W)ithdrawal\n"
           "\nEnter an option: ");

    // reads user's input as char and makes it uppercase
    scanf(" %c", &action);
    action = toupper(action);
    
    // makes final Balance $30,000
    newBal = bal;

    // If user wants to check Balance
    if (action == 'B')
        printf("\nAction: Check Balance");
        
    // if user wants to Deposit
    else if (action == 'D') {
        printf("\nYou have selected Deposit. \nEnter Amount: ");
        scanf("%f", &d_amount);

        // checks if Deposit Amount is 100,000 or lower or 1 and higher
        if (d_amount >= 1 && d_amount <= 100000)
            newBal = bal + d_amount;
        else
            printf("Error: Deposits must be between $1 and $100,000.\n");

    // if user wants to Withdraw
    } else if (action == 'W') {
        printf("\nYou have selected Withdrawal. \nEnter Amount: ");
        scanf("%f", &w_amount);
        
        // check if Withdrawal Amount is valid / within bounds
        if (w_amount >= 0 && w_amount <= 17000 && w_amount <= bal)
            newBal = bal - w_amount;
        else
            printf("Error: Invalid amount or insufficient funds.\n");
            
    } else {
        // handles Invalid option
        printf("Invalid option selected.\n");
        return 1; 
    }

    // Final Balance printed
    printf("\n--------------------------\n");
    printf("Final Balance: $%.2f\n", newBal);

    return 0;
}