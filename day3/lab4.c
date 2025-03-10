    #include <stdio.h>

    int i,n,sum;
    int main()
    {
        printf("print the number");
        scanf("%d",&n);
        sum =1;
        for(i=1 ; i<=n ;i++){
        sum *= i; 
        }
        printf("\n numbers : %d",sum);
        return 0;
    }

