// Write student records with fprintf, then read and display them with fscanf.
#include <stdio.h>

int main(void)
{
    char name[100];
    int roll_number, record_count, i;
    float marks;
    FILE *file;

    printf("Enter the number of student records: ");
    if (scanf("%d", &record_count) != 1 || record_count < 1 || record_count > 1000)
    {
        printf("Invalid record count.\n");
        return 1;
    }
    file = fopen("students.txt", "w");
    if (file == NULL)
    {
        perror("Could not open students.txt for writing");
        return 1;
    }
    for (i = 0; i < record_count; i++)
    {
        printf("Enter student %d name (one word), roll number, and marks: ", i + 1);
        if (scanf("%99s %d %f", name, &roll_number, &marks) != 3)
        {
            fclose(file);
            printf("Invalid student record.\n");
            return 1;
        }
        if (fprintf(file, "%s %d %.2f\n", name, roll_number, marks) < 0)
        {
            fclose(file);
            perror("Could not write student record");
            return 1;
        }
    }
    if (fclose(file) != 0)
    {
        perror("Could not finish writing students.txt");
        return 1;
    }

    file = fopen("students.txt", "r");
    if (file == NULL)
    {
        perror("Could not open students.txt for reading");
        return 1;
    }
    printf("\nStudent records read from students.txt:\n");
    printf("Name\tRoll number\tMarks\n");
    while (fscanf(file, "%99s %d %f", name, &roll_number, &marks) == 3)
        printf("%s\t%d\t\t%.2f\n", name, roll_number, marks);
    if (ferror(file))
    {
        perror("Error reading students.txt");
        fclose(file);
        return 1;
    }
    fclose(file);
    return 0;
}
