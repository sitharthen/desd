#include<stdio.h>

int a,b,c;

int main(){
    printf("enter the no :\n");
    scanf("%d",&a);
    for(int i=0; i<=10 ;i++)
    {
        printf("%d * %d = %d\n",a,i,a*i);
    }
}