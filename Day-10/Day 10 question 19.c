// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>

int main()
{
    int a, b, c;

    // Take the three side lengths as input
    scanf("%d %d %d", &a, &b, &c);

    // Check whether all three sides are equal
    if (a == b && b == c)
    {
        printf("Equilateral");
    }
    // Check whether any two sides are equal
    else if (a == b || b == c || a == c)
    {
        printf("Isosceles");
    }
    // If no sides are equal, it is scalene
    else
    {
        printf("Scalene");
    }

    return 0; // End the program
}
