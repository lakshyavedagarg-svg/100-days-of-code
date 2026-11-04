// Use a month enum to print the number of days in each month (non-leap year).
#include <stdio.h>

enum Month
{
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main(void)
{
    enum Month month;

    for (month = JANUARY; month <= DECEMBER; month++)
    {
        int days;

        switch (month)
        {
            case JANUARY:
            case MARCH:
            case MAY:
            case JULY:
            case AUGUST:
            case OCTOBER:
            case DECEMBER:
                days = 31;
                break;
            case APRIL:
            case JUNE:
            case SEPTEMBER:
            case NOVEMBER:
                days = 30;
                break;
            case FEBRUARY:
                days = 28;
                break;
        }

        printf("Month %d has %d days.\n", month, days);
    }

    return 0;
}
