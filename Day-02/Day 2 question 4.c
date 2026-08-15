// Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

int main()
{
    float radius;
    float area, circumference;
    float pi = 3.14;

    // Take radius as input
    scanf("%f", &radius);

    // Calculate area of the circle
    area = pi * radius * radius;

    // Calculate circumference of the circle
    circumference = 2 * pi * radius;

    // Display the results
    printf("Area=%.2f, Circumference=%.2f",
           area, circumference);

    return 0; // End the program
}