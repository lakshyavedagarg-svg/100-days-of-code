// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main()
{
    int totalSeconds, hours, minutes, seconds;

    // Take the time in seconds as input
    scanf("%d", &totalSeconds);

    // Calculate hours, minutes, and seconds
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    // Display the time in hours:minutes:seconds format
    printf("Time=%d:%d:%d", hours, minutes, seconds);

    return 0; // End the program
}