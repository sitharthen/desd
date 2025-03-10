//Write a C program to find the largest and smallest elements in an array of integers. The size of the array and the elements should be input by the user.

#include<stdio.h>

int main(){
    int i,n;

    printf("enter the elments :\t");
    scanf("%d",&n);

    int arr[n];
    printf("enter the int number :");
    for(i=0 ; i<n ; i++){
    scanf("%d",&arr[i]);
    }

    //largest number & smallest number 

    int largest = arr[0];
    int smallest = arr[0];

    for ( i=0 ; i<n ; i++){
        if( arr[i] > largest )
        largest = arr[i];
        if(arr[i] < smallest)
        smallest = arr[i];
    }

    printf("largest : %d\n",largest);
    printf("small : %d\n",smallest);


}