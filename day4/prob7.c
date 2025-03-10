//Write a C program to find the length of a given string without using the strlen function. The string should be input by the user
#include <stdio.h>

int main() {
    char str[100];  
    int length =1 ; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    while (str[length] != '\0') {
        length++; 
    }

    printf("The length of the string is: %d\n", length);

    return 0;
}