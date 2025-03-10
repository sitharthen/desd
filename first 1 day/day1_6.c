#include <stdio.h>

void count() {
  
    static int counter = 1;
    if (counter <= 5) {
        printf("%d\n", counter);
        counter++; 
    }
}

int main() {
    
    for (int i = 0; i < 5; i++) {
        count();  
    }
    return 0;
}
