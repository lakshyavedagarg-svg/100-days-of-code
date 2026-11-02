// Define the days of the week with an enum and print each value.
#include <stdio.h>

enum Day
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main(void)
{
    const char *day_names[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"
    };
    enum Day day;

    for (day = SUNDAY; day <= SATURDAY; day++)
        printf("%s = %d\n", day_names[day], day);
    return 0;
}
