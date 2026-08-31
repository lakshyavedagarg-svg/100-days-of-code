/* Q36: Write a program to find the HCF (GCD) of two numbers.*/
#include <stdio.h>

int main()
{
    int a, b, remainder;

    // Take two numbers as input
    scanf("%d %d", &a, &b);

    // Use Euclidean algorithm to find the HCF
    while (b != 0)
    {
        // Find the remainder
        remainder = a % b;

        // Move b into a
        a = b;

        // Move remainder into b
        b = remainder;
    }

    // Display the HCF
    printf("HCF=%d", a);

    return 0; // End the program
}