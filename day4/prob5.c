//Write a C program to show the use of gets and puts functions by taking a string from user’s

#include <stdio.h>

int main() {
    char str[100]; 
    
    printf("Enter a string: ");
    gets(str);
    printf("You entered: ");
    puts(str);
    return 0;
}