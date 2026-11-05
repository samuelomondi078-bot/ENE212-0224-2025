
#include <stdio.h>
#include <string.h>

// Function Declarations
int login();
void checkBalance(float balance);
float deposit(float balance);
float withdraw(float balance);

int main() {
    float balance = 1000.0; // Initial account balance
    int choice;

    // Requirement 1: Login / PIN Verification Function
    if (!login()) {
        printf("\nMaximum attempts exceeded. Access denied. Exiting system.\n");
        return 0; // Exits if login fails
    }

    // Requirements 2, 3, & 4: Repeatedly display menu and handle choices until exit
    while (1) {
        printf("\n=== ATM Menu ===\n");
        printf("1. Balance Inquiry\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance = deposit(balance); // Updates balance after deposit
                break;
            case 3:
                balance = withdraw(balance); // Updates balance after withdrawal
                break;
            case 4:
                printf("\nThank you for using our ATM. Goodbye!\n");
                return 0; // Ends the session
            default:
                printf("\nInvalid option! Please choose between 1 and 4.\n");
        }
    }

    return 0;
}

// 1. Login Function (Returns 1 for True/Success, 0 for False/Failure)
int login() {
    char enteredPin[20];
    const char correctPin[] = "1234";
    int attempts = 3;

    while (attempts > 0) {
        printf("\n=== ATM Login ===\n");
        printf("Enter your 4-digit PIN: ");
        scanf("%19s", enteredPin);

        if (strcmp(enteredPin, correctPin) == 0) {
            printf("Login Successful!\n");
            return 1; // True
        } else {
            attempts--;
            printf("Incorrect PIN!\n");
            if (attempts > 0) {
                printf("Remaining attempts: %d\n", attempts);
            }
        }
    }
    return 0; // False
}

// 2. Check Balance Function
void checkBalance(float balance) {
    printf("\n----------------------------------------\n");
    printf("Current Account Balance: $%.2f\n", balance);
    printf("----------------------------------------\n");
}

// 3. Deposit Function
float deposit(float balance) {
    float amount;
    printf("\nEnter amount to deposit: $");
    scanf("%f", &amount);

    // Requirement 5.1: Ensure deposit amount is positive
    if (amount <= 0) {
        printf("Error: Deposit amount must be a positive number!\n");
    } else {
        balance += amount;
        printf("Successfully deposited $%.2f\n", amount);
        printf("New Balance: $%.2f\n", balance);
    }
    return balance;
}

// 4. Withdraw Function
float withdraw(float balance) {
    float amount;
    printf("\nEnter amount to withdraw: $");
    scanf("%f", &amount);

    // Requirement 5.1 & 5.2: Ensure amount is positive and does not exceed balance
    if (amount <= 0) {
        printf("Error: Withdrawal amount must be a positive number!\n");
    } else if (amount > balance) {
        printf("Error: Insufficient balance! Your current balance is $%.2f\n", balance);
    } else {
        balance -= amount;
        printf("Successfully withdrew $%.2f\n", amount);
        printf("Remaining Balance: $%.2f\n", balance);
    }
    return balance;
}
