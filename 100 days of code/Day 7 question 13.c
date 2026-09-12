// Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>

int main()
{
    int year;

    // Take the year as input
    scanf("%d", &year);

    // A leap year is divisible by 400
    // OR divisible by 4 but not divisible by 100
    if ((year % 400 == 0) ||
        (year % 4 == 0 && year % 100 != 0))
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }

    return 0; // End the program
}