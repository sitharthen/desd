//Write a C program to input a number from user and find its factorial with help of functions


#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    int result;

    printf("Enter a number: ");
    scanf("%d", &num);


    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {

        result = factorial(num);

        printf("Factorial of %d is: %d\n", num, result);
    }

    return 0;
}
