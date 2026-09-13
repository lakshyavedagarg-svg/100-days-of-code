/* Q23: Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.*/

#include <stdio.h>

int main()
{
    int days, fine;

    // Take the number of late days as input
    scanf("%d", &days);

    // First 5 days: ₹2 per day
    if (days <= 5)
    {
        fine = days * 2;
        printf("Fine=%d", fine);
    }
    // Next 5 days: ₹4 per day
    else if (days <= 10)
    {
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Fine=%d", fine);
    }
    // Next 20 days: ₹6 per day
    else if (days <= 30)
    {
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Fine=%d", fine);
    }
    else
    {
        // More than 30 days results in membership cancellation
        printf("Membership Cancelled");
    }

    return 0; // End the program
}