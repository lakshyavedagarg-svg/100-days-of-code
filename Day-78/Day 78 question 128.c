// Count vowels and consonants in a file, ignoring digits and special characters.
#include <stdio.h>

int main(void)
{
    char filename[256];
    FILE *file;
    int ch;
    long long vowels = 0, consonants = 0;

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
        if (ch >= 'A' && ch <= 'Z') ch = ch - 'A' + 'a';
        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels++;
            else consonants++;
        }
    }
    if (ferror(file))
    {
        perror("Error reading file");
        fclose(file);
        return 1;
    }
    fclose(file);
    printf("Vowels: %lld\nConsonants: %lld\n", vowels, consonants);
    return 0;
}
