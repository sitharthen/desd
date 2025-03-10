#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;
    
    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;      // Get the last digit of num
        reversed = reversed * 10 + remainder;  // Build the reversed number
        num = num / 10;            // Remove the last digit from num
    } ;            // Continue until num becomes 0

    printf("Reversed number: %d\n", reversed);
    return 0;
}
