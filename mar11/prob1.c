#include <stdio.h>

typedef double Real; 

Real calculate_area(Real radius) {
    return 3.14159265359 * radius * radius; 
}

int main() {
    Real radius = 5.0; 
    Real area = calculate_area(radius); 
    printf("The area of the circle with radius %.2f is %.2f\n", radius, area); 
    return 0;
}
