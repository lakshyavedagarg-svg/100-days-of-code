/* Q32: Write a program to check if a number is a palindrome.*/
#include <stdio.h>

int main()
{
    int n, original, digit, reverse = 0;

    // Take a number as input
    scanf("%d", &n);

    // Store the original number for comparison
    original = n;

    // Reverse the number
    while (n != 0)
    {
        // Extract the last digit
        digit = n % 10;

        // Add the digit to the reversed number
        reverse = reverse * 10 + digit;

        // Remove the last digit
        n = n / 10;
    }

    // Compare the original and reversed numbers
    if (original == reverse)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0; // End the program
}