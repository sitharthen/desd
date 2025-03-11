#include <stdio.h>


union Chamber {
    float temperature;
    float pressure;   
};

int main() {
    
    union Chamber chamber;

    
    printf("Enter temperature of the heat chamber (in Celsius): ");
    scanf("%f", &chamber.temperature); 

    
    printf("Temperature of the heat chamber: %.2f Celsius\n", chamber.temperature);

    printf("Enter pressure of the heat chamber (in atm): ");
    scanf("%f", &chamber.pressure);  

    printf("Pressure of the heat chamber: %.2f atm\n", chamber.pressure);

    return 0;
}
