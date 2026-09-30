// Check whether the second string is a rotation of the first.
#include <stdio.h>

int main(void)
{
    char first[1000], second[1000];
    int length1 = 0, length2 = 0, i, j, rotation = 0;

    printf("Enter the first string: ");
    if (fgets(first, sizeof first, stdin) == NULL) return 1;
    printf("Enter the second string: ");
    if (fgets(second, sizeof second, stdin) == NULL) return 1;
    while (first[length1] != '\0' && first[length1] != '\n') length1++;
    while (second[length2] != '\0' && second[length2] != '\n') length2++;
    if (length1 == length2)
    {
        if (length1 == 0) rotation = 1;
        else
        {
            for (i = 0; i < length1 && !rotation; i++)
            {
                for (j = 0; j < length1; j++)
                    if (second[j] != first[(i + j) % length1]) break;
                if (j == length1) rotation = 1;
            }
        }
    }
    printf("%s\n", rotation ? "The second string is a rotation." : "The second string is not a rotation.");
    return 0;
}
