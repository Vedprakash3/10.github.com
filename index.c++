#include <stdio.h>

void add(float num1, float num2) {
    printf("Result: %.2f\n", num1 + num2);
}

void subtract(float num1, float num2) {
    printf("Result: %.2f\n", num1 - num2);
}

void multiply(float num1, float num2) {
    printf("Result: %.2f\n", num1 * num2);
}

void divide(float num1, float num2) {
    if (num2 != 0) {
        printf("Result: %.2f\n", num1 / num2);
    } else {
        printf("Error! Division by zero.\n");
    }
}

int main() {
    int choice;
    float num1, num2;

    printf("Simple Calculator\n");
    printf("------------------\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (choice) {
        case 1:
            add(num1, num2);
            break;
        case 2:
            subtract(num1, num2);
            break;
        case 3:
            multiply(num1, num2);
            break;
        case 4:
            divide(num1, num2);
            break;
        default:
            printf("Invalid choice! Please try again.\n");
            break;
    }

    return 0;
}