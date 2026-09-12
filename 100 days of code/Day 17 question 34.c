/* Q34: Write a program to check if a number is prime. */
#include <stdio.h>

int main()
{
    int n, i, isPrime = 1;

    // Take a number as input
    scanf("%d", &n);

    // Numbers less than 2 are not prime
    if (n < 2)
    {
        isPrime = 0;
    }

    // Check whether n has any divisor other than 1 and itself
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    // Display the result
    if (isPrime == 1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }

    return 0; // End the program
}