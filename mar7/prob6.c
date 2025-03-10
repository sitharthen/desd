//. Write a C program to reads a string from the user, use pointers to reverse the string in place and prints the original and reversed strings.

#include <stdio.h>
#include <string.h>

//void reverseString(char *str);

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);     
    str[strcspn(str, "\n")] = 0;
    printf("Original String: %s\n", str);
    reverseString(str);
    printf("Reversed String: %s\n", str);
    return 0;
}

void reverseString(char *str) {
    char *start = str;
    char *end = str + strlen(str) - 1;
    char temp;
   
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
