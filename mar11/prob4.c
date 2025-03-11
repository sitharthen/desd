#include <stdio.h>
#include <string.h>


typedef struct {
    char name[100];
    int age;
    int salary;
} Employee;


typedef struct {
    Employee emp;  
} Manager;

void initializeEmployee(Employee *e, const char *name, int age, int salary) {
    int i;
    for (i = 0; i < 99 && name[i] != '\0'; i++) {
        e->name[i] = name[i];
    }
    e->name[i] = '\0'; 
    e->age = age;
    e->salary = salary;
}

void printEmployeeDetails(const Employee *e) {
    printf("Employee Name: %s\n", e->name);
    printf("Age: %d\n", e->age);
    printf("Salary: %d\n", e->salary);
}

void initializeManager(Manager *m, const char *name, int age, int salary) {
    initializeEmployee(&m->emp, name, age, salary);
}

void printManagerDetails(const Manager *m) {
    printEmployeeDetails(&m->emp);
}

int main() {
    Employee employee1;
    initializeEmployee(&employee1, "John Doe", 30, 55000);
    printf("Employee Details:\n");
    printEmployeeDetails(&employee1);
    printf("\n");

    Manager manager1;
    initializeManager(&manager1, "Jane Smith", 40, 75000);
    printf("Manager Details:\n");
    printManagerDetails(&manager1);

    return 0;
} 