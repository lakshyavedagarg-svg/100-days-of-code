// Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>

int main()
{
    char ch;

    // Take a character as input
    scanf(" %c", &ch);

    // Check whether the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }

    return 0; // End the program
}