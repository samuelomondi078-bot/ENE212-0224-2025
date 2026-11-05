#include <stdio.h>
#include <string.h>

int main() {
    char pin[20];
    const char CORRECT_PIN[] = "1234";
    int attempts = 3;
    int choice;
    int i; // Declared outside the for loop to prevent C99/C11 compilation errors

    // 1. PIN Entry loop (Max 3 attempts)
    while (attempts > 0) {
        printf("\n=== Electronic Door Lock System ===\n");
        printf("Enter a 4-digit PIN to unlock: ");
        scanf("%19s", pin);

        int len = strlen(pin);

        // 2. Validate PIN length using if-else if statements
        if (len < 4) {
            printf("PIN is too short (must be 4 digits).\n");
        }
        else if (len > 4) {
            printf("PIN is too long (must be 4 digits).\n");
        }
        else {
            printf("PIN is exactly 4 digits.\n");

            // Check if PIN is correct
            if (strcmp(pin, CORRECT_PIN) == 0) {
                printf("\nAccess Granted!\n");
                break; // Exit the loop on success
            } else {
                attempts--;
                printf("Incorrect PIN!\n");
                if (attempts > 0) {
                    printf("Remaining attempts: %d\n", attempts);
                }
            }
        }
    }

    // 3. Handle Lockout if attempts run out
    if (attempts == 0) {
        printf("\nSystem locked! Wait for 5 seconds...\n");

        // Countdown timer from 5 down to 1 (using pre-declared variable 'i')
        for (i = 5; i >= 1; i--) {
            printf("%d...\n", i);
        }

        printf("You can try again now.\n");
        return 0;
    }

    // 4. Display Device Menu upon successful login
    printf("\n=== Device Menu ===\n");
    printf("1. Open Door\n");
    printf("2. Change Username\n");
    printf("3. Change PIN\n");
    printf("4. Exit\n");

    // Ask user to choose an option and read input into an integer variable
    printf("Choose an option: ");
    scanf("%d", &choice);

    // 5. Use a switch statement to handle the selected option
    switch (choice) {
        case 1:
            printf("Access granted. Door unlocked\n");
            break;
        case 2:
            printf("Change username feature coming soon.\n");
            break;
        case 3:
            printf("Change PIN feature coming soon.\n");
            break;
        case 4:
            printf("Exiting system.\n");
            break;
        default:
            printf("Invalid option! Please try again.\n");
            break;
    }

    return 0;
}
