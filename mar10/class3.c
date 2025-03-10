#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    float height;
    int age;
};

int main() {

    struct Person person1;

    strcpy(person1.name, "mohan"); 
    person1.age = 25;    
    person1.height =30.4233;             

    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("height: %.2f\n", person1.height);
    return 0;
}
