// Open a user-named file, report if it cannot be opened, and display its contents.
#include <stdio.h>

int main(void)
{
    char filename[256], line[1024];
    FILE *file;

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
    while (fgets(line, sizeof line, file) != NULL) fputs(line, stdout);
    if (ferror(file))
    {
        perror("Error reading file");
        fclose(file);
        return 1;
    }
    fclose(file);
    return 0;
}
