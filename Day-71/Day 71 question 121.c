// Save a user's name and age in info.txt using fprintf.
#include <stdio.h>

int main(void)
{
    char name[100];
    int age;
    FILE *file;

    printf("Enter your name: ");
    if (fgets(name, sizeof name, stdin) == NULL) return 1;
    printf("Enter your age: ");
    if (scanf("%d", &age) != 1 || age < 0)
    {
        printf("Invalid age.\n");
        return 1;
    }
    file = fopen("info.txt", "w");
    if (file == NULL)
    {
        perror("Could not open info.txt");
        return 1;
    }
    fprintf(file, "Name: %sAge: %d\n", name, age);
    if (fclose(file) != 0)
    {
        perror("Could not save info.txt");
        return 1;
    }
    printf("Data saved successfully to info.txt.\n");
    return 0;
}
