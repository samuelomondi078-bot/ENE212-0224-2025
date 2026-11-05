#include <stdio.h>
#include <string.h> // Required for strlen()

int main() {
    char name[50];

    // Ask the user to enter a string (name)
    printf("Enter your name: ");
    scanf("%49s", name); // Reads a single word string

    // Print the string back to the user
    printf("Hello, %s!\n", name);

    // Display the length of the string
    printf("The length of your name is: %lu characters\n", strlen(name));

    return 0;
}
