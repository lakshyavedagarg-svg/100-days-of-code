// Map traffic-light enum values to their corresponding instruction.
#include <stdio.h>

enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

int main(void)
{
    int value;
    enum TrafficLight light;

    printf("Enter traffic-light value (RED=0, YELLOW=1, GREEN=2): ");
    if (scanf("%d", &value) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }
    if (value < RED || value > GREEN)
    {
        printf("Invalid traffic-light value.\n");
        return 1;
    }
    light = (enum TrafficLight)value;
    switch (light)
    {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }
    return 0;
}
