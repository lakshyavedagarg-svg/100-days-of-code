/* Q27: Write a program to print the sum of the first n odd numbers.*/
#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    // Take the number of odd numbers as input
    scanf("%d", &n);

    // Generate and add the first n odd numbers
    for (i = 1; i <= n; i++)
    {
        sum = sum + (2 * i - 1);
    }

    // Display the sum
    printf("Sum=%d", sum);

    return 0; // End the program
}