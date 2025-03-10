//Write a C program to perform concatenation on 2 strings. Use pointers to string for strcat() function.


#include <stdio.h>

void strcat_custom(char *dest, const char *src) {
    
    while (*dest != '\0') {
        dest++; 
    }

    
    while (*src != '\0') {
        *dest = *src;  
        dest++;        
        src++;         
    }

    
    *dest = '\0';
}

int main() {
    
    char str1[100] = "bangalore";
    char str2[] = "cdac";

    
    strcat_custom(str2, str1);

    
    printf("Concatenated String: %s\n", str2);

    return 0;
}
