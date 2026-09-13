/* Q38: Write a program to find the sum of digits of a number. */
#include <stdio.h>

int main()
{
    int n, digit, sum = 0;

    // Take a number as input
    scanf("%d", &n);

    // Process each digit
    while (n != 0)
    {
        // Extract the last digit
        digit = n % 10;

        // Add the digit to the sum
        sum = sum + digit;

        // Remove the last digit
        n = n / 10;
    }

    // Display the sum
    printf("Sum=%d", sum);

    return 0; // End the program
}