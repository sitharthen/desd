//define a a union named Vehicle that can store either the number of wheels (int), the engine capacity (float), or the vehicle type (char[20]). Write a program to demonstrate how to use this union to store and print all three types of data

#include <stdio.h>
#include <string.h>


union Vehicle {
    int wheels;          
    float engine_capacity;  
    char vehicle_type[20];  
};

int main() {
    
    union Vehicle v;
   
    v.wheels = 4;
    printf("Number of wheels: %d\n", v.wheels);

    v.engine_capacity = 2.8f;
    printf("Engine capacity: %.2f liters\n", v.engine_capacity);

    strcpy(v.vehicle_type, "normal car");
    printf("Vehicle type: %s\n", v.vehicle_type);

    return 0;
}