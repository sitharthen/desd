//Write a C program to input a single character from user also printing it on screen. (use getchar and putchar functions
#include<stdio.h>

int main()
{
    char ch;
    printf("Enter the character\n");

    ch = getchar();

    printf("I entered \t");
    putchar(ch);
    return 0;
}