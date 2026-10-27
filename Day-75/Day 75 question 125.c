// Append one new line of user-entered text to an existing file.
#include <stdio.h>

int main(void)
{
    char filename[256], text[1000];
    FILE *file;
    int i, has_newline = 0, failed = 0;

    printf("Enter the filename to append to: ");
    if (fgets(filename, sizeof filename, stdin) == NULL) return 1;
    for (i = 0; filename[i] != '\0'; i++)
        if (filename[i] == '\n') { filename[i] = '\0'; break; }
    if (filename[0] == '\0')
    {
        printf("Filename cannot be empty.\n");
        return 1;
    }
    printf("Enter the text to append: ");
    if (fgets(text, sizeof text, stdin) == NULL) return 1;
    for (i = 0; text[i] != '\0'; i++) if (text[i] == '\n') has_newline = 1;
    file = fopen(filename, "a");
    if (file == NULL)
    {
        perror("Could not open file in append mode");
        return 1;
    }
    if (fputs(text, file) == EOF) failed = 1;
    if (!has_newline && fputc('\n', file) == EOF) failed = 1;
    if (fclose(file) != 0) failed = 1;
    if (failed)
    {
        printf("Could not append text to the file.\n");
        return 1;
    }
    printf("Text appended successfully.\n");
    return 0;
}
