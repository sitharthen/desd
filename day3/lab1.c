#include<stdio.h>
int a,b,c,d;

int main()
{
    printf("enter 4 nos.\n");
    scanf("%d %d %d %d,\n",&a,&b,&c,&d);
    printf("a value %d\n",a);
    printf("b value %d\n",b);
    printf("c value %d\n",c);
    printf("d value %d\n",d);
{
    if(a>b && a>c && a>d){
    printf("a is maximum : %d\n",a);
    }
    if(b>a && b>c && b>d){
    printf("b is maximum : %d\n",b);
    }
    if(c>a && c>b && c>d){
    printf("c is maximum : %d\n",c); 
    }
    else {
    printf("d isa maximum : %d\n",d);
    }
    


    if(a<b && a<c && a<d)
    {
        printf("a is minimum = %d\n",a);
    }
    if(b<a && b<c && b<d)
    {
        printf("b is minimum = %d\n",b);
    }
    if(c<b && c<a && c<d)
    {
        printf("c is minimum = %d\n",c);
    }
    else
    {
        printf("d is minimum = %d\n",d);
    }
    
return 0;
}
}