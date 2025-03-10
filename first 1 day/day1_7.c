#include<stdio.h>

int number,i;

int main()
{

    printf("type the number of the table :");
    scanf("%d", &number);
    printf("number of the table you given :%d\n",number);
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d \n",number,i,number * i);
    }
    return 0;
 
}
