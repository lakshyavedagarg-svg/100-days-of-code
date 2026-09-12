/* Q30: Write a program to reverse a given number.*/
#include <stdio.h>

int main()
{
    int n, digit, reverse = 0;

    // Take a number as input
    scanf("%d", &n);

    // Continue until all digits have been processed
    while (n != 0)
    {
        // Get the last digit
        digit = n % 10;

        // Add the digit to the reversed number
        reverse = reverse * 10 + digit;

        // Remove the last digit from the original number
        n = n / 10;
    }

    // Display the reversed number
    printf("Reverse=%d", reverse);

    return 0; // End the program
}