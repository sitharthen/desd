#include<stdio.h>

int a=2;

int main(){
    printf("A global value is : %d\n",a);

    a=20;
    printf("A local value is : %d\n",a);
}