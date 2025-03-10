#include <stdio.h>

int num1 = 10, num2 = 3;
float num3 = 10.0, num4 = 3.0;

int main() {
   
    int div = num1 / num2;
 
    float float_div = num3 / num4;
   
    float casted_div = (float)(num1 / num2);
   
    printf("Integer div  = %d\n", div);  
    printf("Floating div (10.0 / 3.0) = %.3f\n", float_div); 
    printf("integer div float = %.2f\n", casted_div); 
    return 0;
}
