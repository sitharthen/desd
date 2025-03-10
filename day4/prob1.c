#include<stdio.h>
int a,b,result;
void addition(){
    printf("enter two numbers\t");
    scanf("%d %d",&a,&b);
    result = a+b;
    printf("result = %d\n",result);
}

void display(){
    addition();
}

int main (){
    display();
}