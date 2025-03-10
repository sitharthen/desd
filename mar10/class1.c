#include <stdio.h>


void increment(int *ptr) {
    (*ptr)++;
}


void decrement(int *ptr) {
    (*ptr)--;
}

int main() {
    int num = 200;
    
    printf("given value: %d\n", num);
    
    increment(&num);
    printf("after increment: %d\n", num);
    
    decrement(&num);
    printf("after decrement: %d\n", num);
    return 0;
}
