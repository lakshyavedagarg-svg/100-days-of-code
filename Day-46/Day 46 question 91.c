// Remove all vowels from a string.
#include <stdio.h>

int main(void)
{
    char text[1000];
    int read, write = 0;

    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL) return 1;
    for (read = 0; text[read] != '\0' && text[read] != '\n'; read++)
    {
        char ch = text[read];
        char lower = ch;
        if (lower >= 'A' && lower <= 'Z') lower = (char)(lower - 'A' + 'a');
        if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u')
            text[write++] = ch;
    }
    text[write] = '\0';
    printf("Without vowels: %s\n", text);
    return 0;
}
