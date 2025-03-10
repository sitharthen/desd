#include <stdio.h>

int a = 5, b = 3, c = 2;

int main() {
 
    int result1 = a + b * c;
    printf("reuslt1 = %d\n", result1);

    int result2 = (a + b) * c;
    printf("result2 = %d\n", result2); 

    int result3 = a + (b * c);
    printf("result3 = %d\n", result3); 

    return 0;
}
