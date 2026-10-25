// Count characters, words, and lines in a text file.
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char filename[256];
    FILE *file;
    int ch, in_word = 0, previous = '\n';
    long long characters = 0, words = 0, lines = 0;

    printf("Enter the filename: ");
    if (fgets(filename, sizeof filename, stdin) == NULL) return 1;
    for (int i = 0; filename[i] != '\0'; i++)
        if (filename[i] == '\n') { filename[i] = '\0'; break; }
    file = fopen(filename, "r");
    if (file == NULL)
    {
        perror("Could not open file");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF)
    {
        characters++;
        if (ch == '\n') lines++;
        if (isspace((unsigned char)ch)) in_word = 0;
        else if (!in_word)
        {
            words++;
            in_word = 1;
        }
        previous = ch;
    }
    if (ferror(file))
    {
        perror("Error reading file");
        fclose(file);
        return 1;
    }
    if (characters > 0 && previous != '\n') lines++;
    fclose(file);
    printf("Characters: %lld\nWords: %lld\nLines: %lld\n", characters, words, lines);
    return 0;
}
