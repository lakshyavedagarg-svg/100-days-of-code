// Q1: Write a program to input two numbers and display their sum.
#include <stdio.h> // Header file for input and output functions

int main()
{
    int a, b; // Declare two integer variables

    // Take two numbers as input
    scanf("%d %d", &a, &b);

    // Calculate and display their sum
    printf("Sum = %d", a + b);

    return 0; // End the program
}