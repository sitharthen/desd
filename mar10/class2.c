
#include<stdio.h>

struct Rectangle{
    float length;
    float width ;
};

void printRectangle(struct Rectangle rect) {
    printf("Length: %.2f\n", rect.length);
    printf("Width: %.2f\n", rect.width);
}

int main(){

    struct Rectangle rect = {5.5, 3.2};
    printRectangle(rect);
    return 0;

}
