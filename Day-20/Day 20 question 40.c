/* Q40: Write a program to find the 1’s complement of a binary number and print it. */

#include <stdio.h>

int main()
{
    long long binary, result = 0;
    long long place = 1;
    int digit, count = 0;

    // Take binary number as input
    scanf("%lld", &binary);

    // Process each digit
    while (binary != 0)
    {
        // Extract the last digit
        digit = binary % 10;

        // Find the complement
        if (digit == 0)
            digit = 1;
        else
            digit = 0;

        // Add complemented digit to result
        result = result + digit * place;

        // Move to next place
        place = place * 10;

        // Remove the last digit
        binary = binary / 10;

        // Count number of digits
        count++;
    }

    // Print result with leading zeros if required
    printf("%0*lld", count, result);

    return 0;
}