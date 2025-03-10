#include <stdio.h>
#include <string.h>

struct Course {
    char courseName[100];  
    int credits;           
};

struct Student {
    char name[50];             
    int age;                   
    struct Course courses[5];  
};


void printStudentDetails(struct Student *student) {
    printf("Student Name: %s\n", student->name);
    printf("Age: %d\n", student->age);
    printf("Courses Enrolled:\n");

    for (int i = 0; i < 5; i++) {
        if (strlen(student->courses[i].courseName) > 0) { 
            printf("  Course %d: %s (Credits: %d)\n", i + 1, student->courses[i].courseName, student->courses[i].credits);
        }
    }
}

int main() {
 
    struct Student student1;
    strcpy(student1.name, "SACHIN");
    student1.age = 98;

    strcpy(student1.courses[0].courseName, "Mathematics");
    student1.courses[0].credits = 3;
    strcpy(student1.courses[1].courseName, "Computer Science");
    student1.courses[1].credits = 4;
    strcpy(student1.courses[2].courseName, "Physics");
    student1.courses[2].credits = 3;
    
    printStudentDetails(&student1);
    return 0;
}
