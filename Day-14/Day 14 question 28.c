/* Q28: Write a program to print the product of even numbers from 1 to n.*/
#include <stdio.h>

int main()
{
    int n, i;
    long long product = 1;

    // Take the value of n as input
    scanf("%d", &n);

    // Loop through the numbers from 1 to n
    for (i = 2; i <= n; i += 2)
    {
        // Multiply each even number
        product = product * i;
    }

    // Display the product
    printf("Product=%lld", product);

    return 0; // End the program
}