// Q6: Write a program to swap two numbers using a third variable.
#include <stdio.h>

int main()
{
    int a, b, temp;

    // Take two numbers as input
    scanf("%d %d", &a, &b);

    // Store the value of a temporarily
    temp = a;

    // Assign the value of b to a
    a = b;

    // Assign the original value of a to b
    b = temp;

    // Display the swapped values
    printf("a=%d, b=%d", a, b);

    return 0; // End the program
}