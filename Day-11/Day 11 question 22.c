// Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main()
{
    float costPrice, sellingPrice, percentage;

    // Take cost price and selling price as input
    scanf("%f %f", &costPrice, &sellingPrice);

    // Check if there is a profit
    if (sellingPrice > costPrice)
    {
        // Calculate profit percentage
        percentage = ((sellingPrice - costPrice) / costPrice) * 100;

        printf("Profit=%.2f%%", percentage);
    }
    // Check if there is a loss
    else if (sellingPrice < costPrice)
    {
        // Calculate loss percentage
        percentage = ((costPrice - sellingPrice) / costPrice) * 100;

        printf("Loss=%.2f%%", percentage);
    }
    else
    {
        // Cost price and selling price are equal
        printf("No Profit No Loss");
    }

    return 0; // End the program
}