#include<stdio.h>

int a=2;

void down(){
    
    int a=20;
    printf("A local value is : %d\n",a);

} 

int main(){
    printf("A global value is : %d\n",a);

    down();
  
}