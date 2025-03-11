//Write a C program that defines an enum Operation with values ADD, SUBTRACT,  MULTIPLY, and DIVIDE. Write a function performOperation that takes two integers  and an Operation enum value, performs the corresponding operation, and returns the result. Demonstrate this function in your main function

#include <stdio.h>

enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
};


int performOperation(int a, int b, enum Operation op) {
    switch (op) {
        case ADD:
            return a + b;
        case SUBTRACT:
            return a - b;
        case MULTIPLY:
            return a * b;
        case DIVIDE:
            if (b != 0) {
                return a / b;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 0;
            }
        default:
            printf("Error: Invalid operation.\n");
            return 0;
    }
}

int main() {
    int num1 = 10, num2 = 5;

   
    printf("Addition: %d + %d = %d\n", num1, num2, performOperation(num1, num2, ADD));
    printf("Subtraction: %d - %d = %d\n", num1, num2, performOperation(num1, num2, SUBTRACT));
    printf("Multiplication: %d * %d = %d\n", num1, num2, performOperation(num1, num2, MULTIPLY));
    printf("Division: %d / %d = %d\n", num1, num2, performOperation(num1, num2, DIVIDE));

    return 0;
}