#include <stdio.h>

// Function declarations
void printMenu();
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    int choice;
    float num1, num2, result;

    while (1) {
        printMenu();
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting the program.\n");
            break;
        }

        if (choice < 1 || choice > 5) {
            printf("Invalid choice. Please try again.\n\n");
            continue;
        }

        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);

        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Result: %.2f\n\n", result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("Result: %.2f\n\n", result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("Result: %.2f\n\n", result);
                break;
            case 4:
                if (num2 != 0) {
                    result = divide(num1, num2);
                    printf("Result: %.2f\n\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n\n");
                }
                break;
        }
    }

    return 0;
}

// Function to print calculator menu
void printMenu() {
    printf("Simple Calculator\n");
    printf("-----------------\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Exit\n");
}

// Function for addition
float add(float a, float b) {
    return a + b;
}

// Function for subtraction
float subtract(float a, float b) {
    return a - b;
}

// Function for multiplication
float multiply(float a, float b) {
    return a * b;
}

// Function for division
float divide(float a, float b) {
    return a / b;
}
