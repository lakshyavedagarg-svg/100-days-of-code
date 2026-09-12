/* Q40: Write a program to find the 1’s complement of a binary number and print it. */
#include <stdio.h>

int main()
{
    long long binary, result = 0;
    int digit, place = 1;

    // Take a binary number as input
    scanf("%lld", &binary);

    // Process each binary digit
    while (binary != 0)
    {
        // Extract the last digit
        digit = binary % 10;

        // Flip 0 to 1 and 1 to 0
        if (digit == 0)
            digit = 1;
        else
            digit = 0;

        // Place the complemented digit in its position
        result = result + digit * place;

        // Move to the next position
        place = place * 10;

        // Remove the last digit
        binary = binary / 10;
    }

    // Display the 1's complement
    printf("%lld", result);

    return 0; // End the program
}