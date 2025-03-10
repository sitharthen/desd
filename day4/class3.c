//Print elements of array use for Loop ,do while

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);  
    }
    printf("\n");
    
     //do while

    printf("DO WHILE\n");
    int i;
    do{
        printf("%d\n",arr[i]);
        i++;
    }
    while(i<n);
    return 0;
}








// #include <stdio.h>

// int main() {
//     int n;

//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);

//     int arr[n];

//     printf("Enter %d elements of the array:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     // Print array using for loop
//     printf("\nArray elements using FOR loop:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d\n", arr[i]);
//     }

//     // Print array using do-while loop
//     printf("\nArray elements using DO-WHILE loop:\n");
//     int i = 0; // Initialize i for do-while loop
//     do {
//         printf("%d\n", arr[i]);
//         i++;
//     } while (i < n); // Loop condition should be i < n

//     return 0;
// }
