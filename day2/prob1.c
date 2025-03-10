
#include <stdio.h>

int main() {
    int x = 5;

    // Print initial value of x
    printf("Initial value of x: %d\n", x);

    // Pre-increment
    printf("Pre-increment (before): %d\n", x);
    printf("Pre-increment (after): %d\n", ++x);

    
    x = 5;

    // Post-increment
    printf("Post-increment (before): %d\n", x);
    printf("Post-increment (after): %d\n", x++);
    
    //after post-increment
    printf("x after post-increment : %d\n", x);

    return 0;
}
