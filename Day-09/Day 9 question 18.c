/* Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
90-100: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
below 60: Grade F.*/

#include <stdio.h>

int main()
{
    int percentage;

    // Take percentage as input
    scanf("%d", &percentage);

    // Check the percentage and assign a grade
    if (percentage >= 90 && percentage <= 100)
    {
        printf("Grade A");
    }
    else if (percentage >= 80)
    {
        printf("Grade B");
    }
    else if (percentage >= 70)
    {
        printf("Grade C");
    }
    else if (percentage >= 60)
    {
        printf("Grade D");
    }
    else if (percentage >= 0)
    {
        printf("Grade F");
    }
    else
    {
        printf("Invalid Percentage");
    }

    return 0; // End the program
}