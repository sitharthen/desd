#include <stdio.h>


struct Student {
    int roll_number;
    char name[50];
    int standard;
    float percentage;
};

int main() {

    struct Student student;

    printf("Enter roll number: ");
    scanf("%d", &student.roll_number);
    printf("Enter name: ");
    getchar();  
    fgets(student.name, sizeof(student.name), stdin);
    printf("Enter standard: ");
    scanf("%d", &student.standard);
    printf("Enter percentage: ");
    scanf("%f", &student.percentage);
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student.roll_number);
    printf("Name: %s", student.name); 
    printf("Standard: %d\n", student.standard);
    printf("Percentage: %.2f%%\n", student.percentage);

    return 0;
}
