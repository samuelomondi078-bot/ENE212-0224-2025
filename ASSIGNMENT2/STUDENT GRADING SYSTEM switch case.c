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

    // Use a loop to allow the user to enter information for N students[cite: 5]
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

        // Determine the student's grade using a switch-case statement[cite: 5]
        // We use (marks / 10) to group the marks into ranges
        switch (marks / 10) {
            case 10: // Handles 100 marks
            case 9:  // Handles 90-99
            case 8:  // Handles 80-89
            case 7:  // Handles 70-79 (Marks 70–100 -> Grade A)[cite: 4]
                grade = 'A';
                break;
            case 6:  // Marks 60–69 -> Grade B[cite: 4]
                grade = 'B';
                break;
            case 5:  // Marks 50–59 -> Grade C[cite: 4]
                grade = 'C';
                break;
            case 4:  // Marks 40–49 -> Grade D[cite: 4]
                grade = 'D';
                break;
            default: // Below 40 -> Grade F[cite: 4]
                grade = 'F';
                break;
        }

        // Display the student's information in the formatted manner required[cite: 4, 5]
        printf("\n----------------------------------------\n");
        printf("          STUDENT INFORMATION           \n");
        printf("----------------------------------------\n");
        printf("Registration No: %d\n", regNo);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);

        // Use an if-else statement to display whether the student has passed or failed[cite: 5]
        if (marks >= 40) {
            printf("Status: Passed\n");
        } else {
            printf("Status: Failed\n");
        }
        printf("----------------------------------------\n");
    }

    return 0;
}
