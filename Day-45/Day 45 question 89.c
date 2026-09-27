// Count occurrences of a given character in a string.
#include <stdio.h>

int main(void)
{
    char text[1000], target_line[32];
    int i, count = 0;
    char target;

    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL) return 1;
    printf("Enter the character to count: ");
    if (fgets(target_line, sizeof target_line, stdin) == NULL || target_line[0] == '\n' || target_line[0] == '\0')
        return 1;
    target = target_line[0];
    for (i = 0; text[i] != '\0' && text[i] != '\n'; i++)
        if (text[i] == target) count++;
    printf("'%c' occurs %d time(s).\n", target, count);
    return 0;
}
