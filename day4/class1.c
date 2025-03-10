#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Using goto for flow control
    if (number == 1) {
        goto case1;
    } else if (number == 2) {
        goto case2;
    } else {
        goto default_case;
    }

case1:
    printf("You entered number 1\n");
    goto end;

case2:
    printf("You entered number 2\n");
    goto end;

default_case:
    printf("You entered a number other than 1 or 2\n");

end:
    return 0;
}
