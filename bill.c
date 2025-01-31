#include <stdio.h>

int main() {
    // Constants for tax and discount rates
    const float TAX_RATE = 0.1;
    const float DISCOUNT_THRESHOLD = 500.0;
    const float DISCOUNT_RATE = 0.05;

    // Declare variables for rates per unit
    float electricityRate, gasRate, waterRate;

    // Declare variables for units consumed
    float electricityUnit, gasUnit, waterUnit;

    // Declare variables for calculated costs
    float electricityCost, gasCost, waterCost;

    // Declare variable for the total bill cost
    float totalCost;

    // Information of the User
    char userName[50];

    // Welcome message and get user's name
    printf("Welcome to the Utility Bill Calculator!\n");
    printf("Please enter your name: ");
    scanf("%s", userName);

    // Greet the user by name
    printf("\nHello, %s!\n", userName);

    // Get rates per unit for electricity, gas, and water
    printf("\nEnter the rate per unit for electricity (in Rs): ");
    scanf("%f", &electricityRate);
    
    printf("Enter the rate per unit for gas (in Rs): ");
    scanf("%f", &gasRate);
    
    printf("Enter the rate per unit for water (in Rs): ");
    scanf("%f", &waterRate);

    // Get units consumed for electricity, gas, and water
    printf("\nEnter the units consumed for electricity: ");
    scanf("%f", &electricityUnit);
    
    printf("Enter the units consumed for gas: ");
    scanf("%f", &gasUnit);
    
    printf("Enter the units consumed for water: ");
    scanf("%f", &waterUnit);

    // Calculate costs for electricity, gas, and water
    electricityCost = electricityUnit * electricityRate;
    gasCost = gasUnit * gasRate;
    waterCost = waterUnit * waterRate;

    // Calculate total bill cost
    totalCost = electricityCost + gasCost + waterCost;

    // Apply tax if the total cost is above a certain threshold
    if (totalCost > DISCOUNT_THRESHOLD) {
        totalCost += totalCost * TAX_RATE;
        printf("\nTax of %.1f%% applied to the total cost.\n", TAX_RATE * 100);
    }

    // Apply a discount for energy-conscious users
    if (electricityUnit < 50 && gasUnit < 20 && waterUnit < 10) {
        totalCost -= totalCost * DISCOUNT_RATE;
        printf("Congratulations! You qualify for a %.1f%% discount for energy conservation.\n", DISCOUNT_RATE * 100);
    }

    // Display detailed bill with labels
    printf("\n--- Utility Bill Details ---\n");
    printf("Electricity Bill: Rs%.2f\n", electricityCost);
    printf("Gas Bill: Rs%.2f\n", gasCost);
    printf("Water Bill: Rs%.2f\n", waterCost);
    printf("----------------------------\n");
    printf("Total Bill: Rs%.2f\n", totalCost);

    // Suggest energy-saving tips
    printf("\nEnergy-Saving Tips:\n");
    printf("- Turn off lights when not in use.\n");
    printf("- Unplug chargers and appliances.\n");
    printf("- Use energy-efficient appliances.\n");

    // Thank you message
    printf("\nThank you, %s, for using the Utility Bill Calculator!\n", userName);

    return 0;
}
