#include<stdio.h>
int x=1;
int y=0;
int and,or,xor,lshift,rshift,not_x,not_y,not;

void main(){

    //and
    and=x&y;
    printf("and : %d\n",and);

    //or
    or=x|y;
    printf("or : %d\n",or);

    //xor
    xor=x^y;
    printf("xor : %d\n",xor);

    //Left shift
    lshift=x<<y;
    printf("lshift : %d\n",lshift);

    //RIGHT SHIFT
    rshift=x>>y;
    printf("rshift : %d\n",rshift);
    
    // Bitwise NOT
    not_x = ~x;
    not_y = ~y;
    printf("not x: %d\n", not_x);
    printf("not y: %d\n", not_y);

}