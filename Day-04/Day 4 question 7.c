// Q7: Write a program to swap two numbers without using a third variable.
#include <stdio.h>

int main()
{
    int a, b;

    // Take two numbers as input
    scanf("%d %d", &a, &b);

    // Swap the numbers without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Display the swapped values
    printf("a=%d, b=%d", a, b);

    return 0; // End the program
}