// Print initials for every name part except the surname, which is printed in full.
#include <stdio.h>

int main(void)
{
    char name[1000], parts[100][100];
    int count = 0, i = 0, j;

    printf("Enter a name: ");
    if (fgets(name, sizeof name, stdin) == NULL) return 1;
    while (name[i] != '\0' && name[i] != '\n')
    {
        int k = 0;
        while (name[i] == ' ' || name[i] == '\t') i++;
        if (name[i] == '\0' || name[i] == '\n') break;
        if (count == 100) break;
        while (name[i] != '\0' && name[i] != '\n' && name[i] != ' ' && name[i] != '\t')
        {
            if (k < 99) parts[count][k++] = name[i];
            i++;
        }
        parts[count][k] = '\0';
        count++;
    }
    if (count == 0)
    {
        printf("No name entered.\n");
        return 0;
    }
    for (j = 0; j < count - 1; j++)
    {
        char initial = parts[j][0];
        if (initial >= 'a' && initial <= 'z') initial = (char)(initial - 'a' + 'A');
        printf("%c. ", initial);
    }
    printf("%s\n", parts[count - 1]);
    return 0;
}
