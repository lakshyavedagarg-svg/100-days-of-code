// Replace each space in a string with a hyphen.
#include <stdio.h>

int main(void)
{
    char text[1000];
    int i;

    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL) return 1;
    for (i = 0; text[i] != '\0'; i++)
        if (text[i] == ' ') text[i] = '-';
    printf("Updated string: %s", text);
    return 0;
}
