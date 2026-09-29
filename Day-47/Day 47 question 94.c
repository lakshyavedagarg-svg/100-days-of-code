// Find and print the longest word in a sentence (first word wins ties).
#include <stdio.h>

int main(void)
{
    char sentence[1000];
    int i, start = 0, current_start = 0, current_length = 0;
    int longest_start = 0, longest_length = 0;

    printf("Enter a sentence: ");
    if (fgets(sentence, sizeof sentence, stdin) == NULL) return 1;
    for (i = 0; ; i++)
    {
        char ch = sentence[i];
        if (ch != '\0' && ch != '\n' && ch != ' ' && ch != '\t' && ch != '\r')
        {
            if (current_length == 0) current_start = i;
            current_length++;
        }
        else
        {
            if (current_length > longest_length)
            {
                longest_start = current_start;
                longest_length = current_length;
            }
            current_length = 0;
            if (ch == '\0' || ch == '\n') break;
        }
    }
    if (longest_length == 0)
    {
        printf("The sentence contains no words.\n");
        return 0;
    }
    printf("Longest word: ");
    for (start = longest_start; start < longest_start + longest_length; start++)
        putchar(sentence[start]);
    putchar('\n');
    return 0;
}
