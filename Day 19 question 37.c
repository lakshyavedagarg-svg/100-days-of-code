/* Q37: Write a program to find the LCM of two numbers. */
#include <stdio.h>

int main()
{
    int a, b, lcm, max;

    // Take two numbers as input
    scanf("%d %d", &a, &b);

    // Find the larger number
    max = (a > b) ? a : b;

    // Find the LCM
    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            lcm = max;
            break;
        }
        max++;
    }

    // Display the LCM
    printf("LCM=%d", lcm);

    return 0; // End the program
}