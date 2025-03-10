//Write a C program to access elements of an array of 10 elements using pointer  arithmetic

#include <stdio.h>

int main() {
   
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    
   
    int *ptr = arr;
    
   
    printf("Array elements using pointer arithmetic:\n");
    
    for (int i = 0; i < 10; i++) {
        printf("Element %d: %d\n", i + 1, *(ptr + i));  
    }

    return 0;
}
