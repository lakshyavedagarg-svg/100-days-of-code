// Find the first lowercase letter whose second occurrence appears first.
#include <stdio.h>

int main(void)
{
    char text[1000];
    int seen[26] = {0};
    int i, found = 0;

    printf("Enter a string of lowercase letters: ");
    if (fgets(text, sizeof text, stdin) == NULL) return 1;
    for (i = 0; text[i] != '\0' && text[i] != '\n'; i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            int index = text[i] - 'a';
            if (seen[index])
            {
                printf("First repeating lowercase letter: %c\n", text[i]);
                found = 1;
                break;
            }
            seen[index] = 1;
        }
    }
    if (!found) printf("No lowercase letter repeats.\n");
    return 0;
}
