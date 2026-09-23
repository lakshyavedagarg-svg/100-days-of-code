// Print each character of a string on a new line.
#include <stdio.h>

int main(void)
{
    char text[1000];
    int i;

    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    for (i = 0; text[i] != '\0' && text[i] != '\n'; i++)
        printf("%c\n", text[i]);
    return 0;
}
