// Convert lowercase letters in input.txt to uppercase and write output.txt.
#include <stdio.h>

int main(void)
{
    FILE *input = fopen("input.txt", "r");
    FILE *output;
    int ch, failed = 0;

    if (input == NULL)
    {
        perror("Could not open input.txt");
        return 1;
    }
    output = fopen("output.txt", "w");
    if (output == NULL)
    {
        perror("Could not open output.txt");
        fclose(input);
        return 1;
    }
    while ((ch = fgetc(input)) != EOF)
    {
        if (ch >= 'a' && ch <= 'z') ch = ch - 'a' + 'A';
        if (fputc(ch, output) == EOF) { failed = 1; break; }
    }
    if (ferror(input)) failed = 1;
    if (fclose(input) != 0) failed = 1;
    if (fclose(output) != 0) failed = 1;
    if (failed)
    {
        printf("An error occurred while converting the file.\n");
        return 1;
    }
    printf("Converted text saved to output.txt.\n");
    return 0;
}
