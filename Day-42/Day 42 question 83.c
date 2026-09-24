// Count vowels and consonants in a string; ignore non-letter characters.
#include <stdio.h>

int main(void)
{
    char text[1000];
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    for (i = 0; text[i] != '\0' && text[i] != '\n'; i++)
    {
        char ch = text[i];
        if (ch >= 'A' && ch <= 'Z') ch = (char)(ch - 'A' + 'a');
        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
