// Show that enums store integers by printing assigned values.
#include <stdio.h>

enum TrafficLight
{
    RED = 1,
    YELLOW = 5,
    GREEN = 10
};

int main(void)
{
    printf("RED = %d\n", RED);
    printf("YELLOW = %d\n", YELLOW);
    printf("GREEN = %d\n", GREEN);

    return 0;
}
