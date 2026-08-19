// Q11: Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>

int main()
{
    int n;

    // Take an integer as input
    scanf("%d", &n);

    // Check whether the number is divisible by 2
    if (n % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    return 0; // End the program
}
