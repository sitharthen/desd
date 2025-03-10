#include<stdio.h>

int x=10;
int y=20;

int main()
{
    x=x+y;
    y=x-y;
    x=x-y;
    printf("swapped y value is : %d\n",y );
    printf("swapped x value is : %d\n",x );
}