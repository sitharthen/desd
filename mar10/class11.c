//Write a C program that defines an enum Operation with values ADD, SUBTRACT, MULTIPLY, and DIVIDE. Write a function performOperation that takes two integers and an Operation enum value, performs the corresponding operation, and returns the result. Demonstrate this function in your main function. Take 2 integer values from user


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
    int num1, num2, result;
    int operationChoice;

   
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

  
    printf("Select operation (0 = ADD, 1 = SUBTRACT, 2 = MULTIPLY, 3 = DIVIDE):\n ");
    scanf("%d", &operationChoice);

      
    result = performOperation(num1, num2, (enum Operation)operationChoice);

   
    switch (operationChoice) {
        case ADD:
            printf("%d + %d = %d\n", num1, num2, result);
            break;
        case SUBTRACT:
            printf("%d - %d = %d\n", num1, num2, result);
            break;
        case MULTIPLY:
            printf("%d * %d = %d\n", num1, num2, result);
            break;
        case DIVIDE:
            printf("%d / %d = %d\n", num1, num2, result);
            break;
    }

    return 0;
}