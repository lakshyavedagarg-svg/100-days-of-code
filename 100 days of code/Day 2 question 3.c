// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main()
{
    int length, breadth;

    // Take length and breadth as input
    scanf("%d %d", &length, &breadth);

    // Calculate and display area and perimeter
    printf("Area=%d, Perimeter=%d",
           length * breadth,
           2 * (length + breadth));

    return 0; // End the program
}