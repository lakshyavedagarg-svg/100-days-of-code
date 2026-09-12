/*Q35: Write a program to print all factors of a given number.*/
#include <stdio.h>

int main()
{
    int n, i;

    // Take a number as input
    scanf("%d", &n);

    // Check every number from 1 to n
    for (i = 1; i <= n; i++)
    {
        // If n is exactly divisible by i, i is a factor
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }

    return 0; // End the program
}