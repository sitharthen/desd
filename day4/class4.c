//Manipulate 2D array declaration by leaving rows or columns or both blank.
#include<stdio.h>

void main(){
    int i,j;
    int arr[2][3];
    arr[0][0]=1;
    arr[0][1]=2;
    arr[0][2]=3;
    arr[1][0]=4;
    arr[1][1]=5;
    arr[1][2]=6;
    for (int i = 0; i < 2 ; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
}