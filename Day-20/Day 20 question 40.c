/* Q40: Write a program to find the 1’s complement of a binary number and print it. */
#include <stdio.h>

int main()
{
    char binary[100];
    int i;

    // Take binary number as input
    printf("Enter a binary number: ");
    scanf("%99s", binary);

    // Find the 1's complement
    for (i = 0; binary[i] != '\0'; i++)
    {
        if (binary[i] == '0')
        {
            binary[i] = '1';
        }
        else if (binary[i] == '1')
        {
            binary[i] = '0';
        }
    }

    // Print the result
    printf("1's complement = %s\n", binary);

    return 0;
}