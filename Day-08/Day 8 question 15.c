// Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>

int main()
{
    char ch;

    // Take a character as input
    scanf(" %c", &ch);

    // Check for uppercase alphabet
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase Alphabet");
    }
    // Check for lowercase alphabet
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase Alphabet");
    }
    // Check for digit
    else if (ch >= '0' && ch <= '9')
    {
        printf("Digit");
    }
    // Anything else is a special character
    else
    {
        printf("Special Character");
    }

    return 0; // End the program
}