//Write a C program to calculate power of given base and index (power = base^index)

#include <stdio.h>

int power(int base, int index) {
    int result = 1;
    
    for (int i = 1; i <= index; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base, index;
    
    printf("Enter base: ");
    scanf("%d", &base);
    
    printf("Enter index: ");
    scanf("%d", &index);
    
    if (index < 0) {
        printf("Index must be a non-negative integer.\n");
    } else {
        int result = power(base, index);
        printf("%d^%d = %d\n", base, index, result);
    }
    
    return 0;
}
