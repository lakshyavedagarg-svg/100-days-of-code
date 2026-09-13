/*Q33: Write a program to check if a number is an Armstrong number.*/
#include <stdio.h>

int main()
{
    int n, original, digit, sum = 0;

    // Take a number as input
    scanf("%d", &n);

    // Store the original number for comparison
    original = n;

    // Calculate the sum of cubes of each digit
    while (n != 0)
    {
        // Extract the last digit
        digit = n % 10;

        // Add the cube of the digit to the sum
        sum = sum + digit * digit * digit;

        // Remove the last digit
        n = n / 10;
    }

    // Compare the original and sum
    if (original == sum)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstrong Number");
    }

    return 0; // End the program
}