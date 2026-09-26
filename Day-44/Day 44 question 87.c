// Count spaces, digits, and special characters in a string.
#include <stdio.h>

int main(void)
{
    char text[1000];
    int i, spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL) return 1;
    for (i = 0; text[i] != '\0' && text[i] != '\n'; i++)
    {
        char ch = text[i];
        if (ch == ' ') spaces++;
        else if (ch >= '0' && ch <= '9') digits++;
        else if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))) special++;
    }
    printf("Spaces: %d\nDigits: %d\nSpecial characters: %d\n", spaces, digits, special);
    return 0;
}
