#include <stdio.h>

int x = 10; 
    
int main() {

    x += 5;
    printf("x increment is: %d\n", x);
    
    x -= 2;
    printf("x decrement is: %d\n", x);
    
    x *= 3;
    printf("x multiply is: %d\n", x);

    x /= 4;
    printf("x divide is: %d\n", x);
    return 0;
}
