// Q16: Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>

int main()
{
    int a, b, c, largest;

    // Take three numbers as input
    scanf("%d %d %d", &a, &b, &c);

    // Compare the three numbers
    if (a >= b && a >= c)
    {
        largest = a;
    }
    else if (b >= a && b >= c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    // Display the largest number
    printf("Largest=%d", largest);

    return 0; // End the program
}