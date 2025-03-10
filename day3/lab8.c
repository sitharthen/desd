#include<stdio.h>

int a,b;
char operator;

int main()
{
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter arithmetic operation (+, -, *, /): ");
    scanf(" %c", &operator);  

    switch (operator)
    {
    case '+':
    printf("%d + %d = %d\n", a, b, a + b);
    break;

    case '-':
    printf("%d - %d = %d\n", a, b, a - b);
    break;

    case '*':
    printf("%d * %d = %d\n", a, b, a * b);
    break;

    case '/':
    if (b != 0) {
    printf("%d / %d = %d\n", a, b, a / b);
    } else {
    printf("wrong Division by zero.\n");
    }
    break;
    default:
    printf("Invalid operator! Please enter +, -, *, or /.\n");
}

return 0;
}
