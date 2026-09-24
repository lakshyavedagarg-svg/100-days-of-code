// Convert lowercase English letters to uppercase using ASCII arithmetic.
#include <stdio.h>

int main(void)
{
    char text[1000];
    int i;

    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    for (i = 0; text[i] != '\0'; i++)
        if (text[i] >= 'a' && text[i] <= 'z')
            text[i] = (char)(text[i] - 'a' + 'A');
    printf("Uppercase: %s", text);
    return 0;
}
