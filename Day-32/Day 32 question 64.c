// Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main()
{
    int num, digit, maxDigit = 0, maxCount = 0;
    int count[10] = {0}; // Array to store the count of each digit (0-9)

    printf("Enter an integer number: ");
    scanf("%d", &num);

    // Count the occurrences of each digit
    while (num != 0)
    {
        digit = num % 10; // Get the last digit
        count[digit]++;   // Increment the count for the digit
        num /= 10;        // Remove the last digit
    }

    // Find the digit with the maximum count
    for (int i = 0; i < 10; i++)
    {
        if (count[i] > maxCount)
        {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("The digit that occurs the most time is: %d (occurs %d times)\n", maxDigit, maxCount);
    return 0;
}