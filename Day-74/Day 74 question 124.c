// Copy a source file to a destination file using fgetc and fputc.
#include <stdio.h>
#include <string.h>

int main(void)
{
    char source_name[256], destination_name[256];
    FILE *source, *destination;
    int ch, failed = 0;

    printf("Enter the source filename: ");
    if (fgets(source_name, sizeof source_name, stdin) == NULL) return 1;
    for (int i = 0; source_name[i] != '\0'; i++)
        if (source_name[i] == '\n') { source_name[i] = '\0'; break; }
    printf("Enter the destination filename: ");
    if (fgets(destination_name, sizeof destination_name, stdin) == NULL) return 1;
    for (int i = 0; destination_name[i] != '\0'; i++)
        if (destination_name[i] == '\n') { destination_name[i] = '\0'; break; }
    if (source_name[0] == '\0' || destination_name[0] == '\0')
    {
        printf("Filenames cannot be empty.\n");
        return 1;
    }
    if (strcmp(source_name, destination_name) == 0)
    {
        printf("Source and destination filenames must be different.\n");
        return 1;
    }
    source = fopen(source_name, "rb");
    if (source == NULL)
    {
        perror("Could not open source file");
        return 1;
    }
    destination = fopen(destination_name, "wb");
    if (destination == NULL)
    {
        perror("Could not open destination file");
        fclose(source);
        return 1;
    }
    while ((ch = fgetc(source)) != EOF)
        if (fputc(ch, destination) == EOF) { failed = 1; break; }
    if (ferror(source)) failed = 1;
    if (fclose(source) != 0) failed = 1;
    if (fclose(destination) != 0) failed = 1;
    if (failed)
    {
        printf("An error occurred while copying the file.\n");
        return 1;
    }
    printf("File copied successfully.\n");
    return 0;
}
