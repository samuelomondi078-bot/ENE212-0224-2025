#include <stdio.h>

int main() {
    // Declare variables at the top for compiler compatibility
    int N;
    int i;
    int regNo;
    char name[50];
    int marks;
    char grade;

    // Ask the user to enter the number of students (N)
    printf("Enter the number of students (N): ");
    scanf("%d", &N);

    // Use a loop to allow the user to enter information for N students
    for (i = 0; i < N; i++) {
        printf("\n--- Enter Details for Student %d ---\n", i + 1);

        printf("Registration number: ");
        scanf("%d", &regNo);

        // Clear input buffer before taking string input with spaces
        getchar();

        printf("Name: ");
        scanf("%[^\n]s", name); // Reads name including spaces

        printf("Marks: ");
        scanf("%d", &marks);

        // Determine the student's grade using if-else if-else statements
        if (marks >= 70 && marks <= 100) {
            grade = 'A';
        }
        else if (marks >= 60 && marks <= 69) {
            grade = 'B';
        }
        else if (marks >= 50 && marks <= 59) {
            grade = 'C';
        }
        else if (marks >= 40 && marks <= 49) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }

        // Display the student's information in the formatted manner required
        printf("\n----------------------------------------\n");
        printf("          STUDENT INFORMATION           \n");
        printf("----------------------------------------\n");
        printf("Registration No: %d\n", regNo);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);

        // Use an if-else statement to display whether the student has passed or failed
        if (marks >= 40) {
            printf("Status: Passed\n");
        } else {
            printf("Status: Failed\n");
        }
        printf("----------------------------------------\n");
    }

    return 0;
}
