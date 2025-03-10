#include<stdio.h>

int a = 0;
int b =1;
int n,c;

int main(){
    
    scanf("%d",&n);
    printf("enter the number : %d\n",n);
    printf("0\t 1\t");
    for(int i=0 ; i<n ; i++){
    c=a+b;
    a=b;
    b=c;
    printf("%d\t",c);
    }
    return 0;

}