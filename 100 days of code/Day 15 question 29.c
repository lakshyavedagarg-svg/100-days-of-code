/* Q29: Write a program to calculate the factorial of a number.*/
#include <stdio.h>

int main()
{
    int n, i;
    long long factorial = 1;

    // Take the number as input
    scanf("%d", &n);

    // Calculate factorial using a loop
    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    // Display the factorial
    printf("Factorial=%lld", factorial);

    return 0; // End the program
}