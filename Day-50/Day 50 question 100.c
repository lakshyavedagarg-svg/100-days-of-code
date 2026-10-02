// Print every non-empty contiguous substring of a string.
#include <stdio.h>

int main(void)
{
    char text[200];
    int length = 0, start, end, i;

    printf("Enter a string (max 199 characters): ");
    if (fgets(text, sizeof text, stdin) == NULL) return 1;
    while (text[length] != '\0' && text[length] != '\n') length++;
    printf("Substrings:\n");
    for (start = 0; start < length; start++)
    {
        for (end = start; end < length; end++)
        {
            for (i = start; i <= end; i++) putchar(text[i]);
            putchar('\n');
        }
    }
    return 0;
}
