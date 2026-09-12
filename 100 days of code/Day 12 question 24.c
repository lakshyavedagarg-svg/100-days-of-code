/* Q24: Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above at ₹12/unit*/

#include <stdio.h>

int main()
{
    int units;
    float bill;

    // Take the number of units consumed as input
    scanf("%d", &units);

    // First 100 units at ₹5 per unit
    if (units <= 100)
    {
        bill = units * 5;
    }
    // Next 100 units at ₹7 per unit
    else if (units <= 200)
    {
        bill = (100 * 5) + ((units - 100) * 7);
    }
    // Next 100 units at ₹10 per unit
    else if (units <= 300)
    {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }
    // Above 300 units at ₹12 per unit
    else
    {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }

    // Display the total bill
    printf("Bill=%.2f", bill);

    return 0; // End the program
}