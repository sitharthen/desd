//. Take number and character from user and print character that number of times using while loop
#include <stdio.h>

int main()
{
    int n,i=0;
    char ch;
    printf("enter the number\n");
    scanf("%d", &n);
    printf("enter the name \n");
    scanf(" %c", &ch);

    while (i<n){
        printf("%c\n", ch);
        i++;
    }
    return 0;
}