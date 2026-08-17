// Q8: Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>

int main()
{
    int n, sum;

    // Take the value of n as input
    scanf("%d", &n);

    // Calculate the sum of the first n natural numbers
    sum = n * (n + 1) / 2;

    // Display the sum
    printf("Sum=%d", sum);

    return 0; // End the program
}