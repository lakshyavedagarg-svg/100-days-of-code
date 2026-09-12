// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h> // Header file for input and output functions

int main()
{
    int a, b; // Declare two integer variables

    // Take two numbers as input
    scanf("%d %d", &a, &b);

    // Display the sum, difference, and product
    printf("Sum=%d, Diff=%d, Product=%d, ", a + b, a - b, a * b);

    // Check whether the second number is zero before division
    if (b != 0)
    {
        // Display the quotient using integer division
        printf("Quotient=%d", a / b);
    }
    else
    {
        // Handle division by zero
        printf("Quotient=Undefined");
    }

    return 0; // End the program
}