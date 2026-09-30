#include <stdio.h>

int main() {
    char op;
    int num1, num2;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two whole numbers: ");
    scanf("%d %d", &num1, &num2);

    if (op == '+') {
        printf("Result = %d\n", num1 + num2);
    }
    else if (op == '-') {
        printf("Result = %d\n", num1 - num2);
    }
    else if (op == '*') {
        printf("Result = %d\n", num1 * num2);
    }
    else if (op == '/') {
        if (num2 == 0) {
            printf("Error: Cannot divide by zero!\n");
        } else {
            printf("Result = %d\n", num1 / num2);
        }
    }
    else {
        printf("Error: Invalid operator!\n");
    }

    return 0;
}
