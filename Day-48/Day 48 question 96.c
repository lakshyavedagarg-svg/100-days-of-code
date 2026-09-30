// Reverse each word while keeping the word order and separators unchanged.
#include <stdio.h>

int main(void)
{
    char sentence[1000];
    int i = 0, j;

    printf("Enter a sentence: ");
    if (fgets(sentence, sizeof sentence, stdin) == NULL) return 1;
    while (sentence[i] != '\0' && sentence[i] != '\n')
    {
        if (sentence[i] == ' ' || sentence[i] == '\t' || sentence[i] == '\r')
        {
            putchar(sentence[i++]);
        }
        else
        {
            int start = i;
            while (sentence[i] != '\0' && sentence[i] != '\n' && sentence[i] != ' ' && sentence[i] != '\t' && sentence[i] != '\r') i++;
            for (j = i - 1; j >= start; j--) putchar(sentence[j]);
        }
    }
    putchar('\n');
    return 0;
}
