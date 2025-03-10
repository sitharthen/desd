#include <stdio.h>

int num1, num2, num3;
int max;

int main() {


    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("FIRST NUMBER: %d\n",num1);
    printf("SECOND NUMBER: %d\n",num2);
    printf("THIRD NUMBER: %d\n",num3);


    int result = (num1 > num2)&&(num1 > num3) ? num1 : (num2 > num3) ? num2 : num3 ;
        
    printf("The maximum number is: %d\n", result);
    
    return 0;
}
