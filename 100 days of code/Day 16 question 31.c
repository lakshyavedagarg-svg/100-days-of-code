/* Q31: Write a program to take a number as input and print its equivalent binary representation.*/
#include <stdio.h>

int main()
{
    int n, binary[32], i = 0;

    // Take a decimal number as input
    scanf("%d", &n);

    // Handle the special case of zero
    if (n == 0)
    {
        printf("0");
        return 0;
    }

    // Convert decimal to binary
    while (n > 0)
    {
        // Store the remainder (0 or 1)
        binary[i] = n % 2;

        // Divide the number by 2
        n = n / 2;

        i++;
    }

    // Print the binary digits in reverse order
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    return 0; // End the program
}