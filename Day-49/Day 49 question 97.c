// Print the initials of all name parts.
#include <stdio.h>

int main(void)
{
    char name[1000];
    int i = 0, printed = 0;

    printf("Enter a name: ");
    if (fgets(name, sizeof name, stdin) == NULL) return 1;
    while (name[i] != '\0' && name[i] != '\n')
    {
        if (name[i] != ' ' && name[i] != '\t' && (i == 0 || name[i - 1] == ' ' || name[i - 1] == '\t'))
        {
            char initial = name[i];
            if (initial >= 'a' && initial <= 'z') initial = (char)(initial - 'a' + 'A');
            printf("%c.", initial);
            printed = 1;
        }
        i++;
    }
    if (!printed) printf("No name entered");
    putchar('\n');
    return 0;
}
