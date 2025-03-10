#include <stdio.h>

int i,n,sum = 0;
int main()
{
    printf("print the number");
    scanf("%d",&n);
    for(i=0 ; i<=n ;i++){
    sum += i; 
    }
    printf("\n numbers : %d\n",sum);
}