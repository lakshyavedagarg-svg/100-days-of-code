// Count characters in a string without using a length function.
#include <stdio.h>

int main(void)
{
    char text[1000];
    int length = 0;

    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    while (text[length] != '\0' && text[length] != '\n')
        length++;
    printf("Character count: %d\n", length);
    return 0;
}
