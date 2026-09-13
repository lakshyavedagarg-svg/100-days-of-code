// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>

int main()
{
    int n;

    // Take an integer as input
    scanf("%d", &n);

    // Check whether the number is positive
    if (n > 0)
    {
        printf("Positive");
    }
    else
    {
        // If not positive, check whether it is negative
        if (n < 0)
        {
            printf("Negative");
        }
        else
        {
            // If it is neither positive nor negative, it is zero
            printf("Zero");
        }
    }

    return 0; // End the program
}