#include <stdio.h>

int main() {
    float electricityRate, gasRate, waterRate;
    float electricityUnit, gasUnit, waterUnit;
    float electricityCost, gasCost, waterCost;
    float totalCost;

    // Get rates per unit for electricity, gas, and water
    printf("Enter electricity rate per unit: ");
    scanf("%f", &electricityRate);
    printf("Enter gas rate per unit: ");
    scanf("%f", &gasRate);
    printf("Enter water rate per unit: ");
    scanf("%f", &waterRate);

    // Get units consumed for electricity, gas, and water
    printf("Enter electricity units consumed: ");
    scanf("%f", &electricityUnit);
    printf("Enter gas units consumed: ");
    scanf("%f", &gasUnit);
    printf("Enter water units consumed: ");
    scanf("%f", &waterUnit);

    // Calculate costs for electricity, gas, and water
    electricityCost = electricityUnit * electricityRate;
    gasCost = gasUnit * gasRate;
    waterCost = waterUnit * waterRate;

    // Calculate total bill cost
    totalCost = electricityCost + gasCost + waterCost;

    // Print the bill details
    printf("\nElectricity Bill:Rs%.2f", electricityCost);
    printf("\nGas Bill:Rs%.2f", gasCost);
    printf(" \nWater Bill:Rs%.2f", waterCost);
    printf(" \nTotal Bill:Rs%.2f", totalCost);

    return 0;
}
