//Take number and character from user and print character that number of times using recursion.

#include <stdio.h>

void character(int n,char ch)
{
    if (n==0){
        return;
    }
    printf("%c\t", ch);

    character(n-1,ch);
}


int main() {
    int n;
    char ch;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Enter the character: ");
    scanf(" %c", &ch);

    character(n, ch);

    return 0;
}
