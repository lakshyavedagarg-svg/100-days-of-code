/* Q39: Write a program to find the product of odd digits of a number. */
#include <stdio.h>

int main()
{
    int n, digit, product = 1;

    // Take a number as input
    scanf("%d", &n);

    // Process each digit
    while (n != 0)
    {
        // Extract the last digit
        digit = n % 10;

        // Check if the digit is odd
        if (digit % 2 != 0)
        {
            // Multiply the odd digit
            product = product * digit;
        }

        // Remove the last digit
        n = n / 10;
    }

    // Display the product
    printf("Product=%d", product);

    return 0; // End the program
}