//Write a C program to swap two integer variables using pointers and functions,prrob6 also same .
#include <stdio.h>

void swap(int *x, int *y,int *z) {
    int temp;
    temp = *x;  
    *x = *z;    
    *z = temp;
    //*y = *y;

}

void print(){
    int a, b, c;

    printf("Enter two integers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Before swap: a = %d, b = %d c = %d\n", a, b,c);
    swap(&a, &b, &c);
    printf("After swap: a = %d, b = %d c = %d\n", a, b, c);

}
int main() {
    print();
    return 0;
}
