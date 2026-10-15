// Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main()
{
    int n, first, last, temp, divisor = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // Find last digit
    last = n % 10;

    // Find first digit and divisor
    while (temp >= 10)
    {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    first = temp;

    // Find middle digits
    middle = (n % divisor) / 10;

    // Form the new number
    result = last * divisor + middle * 10 + first;

    printf("After swapping = %d\n", result);

    return 0;
}