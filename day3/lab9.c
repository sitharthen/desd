#include <stdio.h>

int main() {
    int choice;
    int a, b, result;

    while(1) {
 
        printf("Menu:\n");
        printf("0. Exit\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");

        
        printf("Enter your choice: ");
        scanf("%d", &choice);

        
        if (choice == 0) {
            printf("Exiting program...\n");
            break;
        }

        printf("Enter first number: ");
        scanf("%d", &a);
        printf("Enter second number: ");
        scanf("%d", &b);
        
        switch (choice) {
            case 1:
                result = a + b;
                printf("Result: %d + %d = %d\n", a, b, result);
                break;
            case 2:
                result = a - b;
                printf("Result: %d - %d = %d\n", a, b, result);
                break;
            case 3:
                result = a * b;
                printf("Result: %d * %d = %d\n", a, b, result);
                break;
            case 4:
                if (b != 0) {
                    result = a / b;
                    printf("Result: %d / %d = %d\n", a, b, result);
                } else {
                    printf("Error! Division by zero is not allowed.\n");
                }
                break;
                default:
                printf("Invalid choice! Please choose a valid operation.\n");
                break;
        }
    }

    return 0;
}
