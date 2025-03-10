#include <stdio.h>

int main() {
    int n, i;
    int sum ,average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];  // Add each element to sum
    }

    // Calculate the average
    average = sum / n;

    // Output the result
    printf("The average of the entered numbers is: %d\n", average);

    return 0;
}
