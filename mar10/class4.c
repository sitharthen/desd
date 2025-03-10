#include <stdio.h>
#include<string.h>
struct circle {
    float radius;
    char color[20];
};

void updateRadius(struct circle *round, float newRadius) {  
    round->radius = newRadius;  
    printf("Updated radius: %.2f\n", round->radius);  
}

int main() {
    
    struct circle mycircle = {10.0, "RED"};  
    strcpy(mycircle.color, "RED");
    printf("Initial radius: %.2f\n", mycircle.radius);
    printf("colour: %s\n", mycircle.color);
    updateRadius(&mycircle, 15.0);     
    return 0;
}
