// Toggle the case of every English letter in a string.
#include <stdio.h>

int main(void)
{
    char text[1000];
    int i;

    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL) return 1;
    for (i = 0; text[i] != '\0'; i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z') text[i] = (char)(text[i] - 'a' + 'A');
        else if (text[i] >= 'A' && text[i] <= 'Z') text[i] = (char)(text[i] - 'A' + 'a');
    }
    printf("Toggled string: %s", text);
    return 0;
}
