// Convert a line to sentence case: capitalize sentence starts and lowercase other letters.
#include <stdio.h>

int main(void)
{
    char text[2000];
    int i, capitalize_next = 1;

    printf("Enter a sentence: ");
    if (fgets(text, sizeof text, stdin) == NULL) return 1;
    for (i = 0; text[i] != '\0'; i++)
    {
        char ch = text[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            if (capitalize_next)
            {
                if (ch >= 'a' && ch <= 'z') text[i] = (char)(ch - 'a' + 'A');
                capitalize_next = 0;
            }
            else if (ch >= 'A' && ch <= 'Z') text[i] = (char)(ch - 'A' + 'a');
        }
        if (ch == '.' || ch == '!' || ch == '?') capitalize_next = 1;
    }
    printf("Sentence case: %s", text);
    return 0;
}
