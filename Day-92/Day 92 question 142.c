// Store and print the details of five students using an array of structures.
#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

int main(void)
{
    struct Student students[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter details for student %d\n", i + 1);

        printf("Name: ");
        scanf("%49s", students[i].name);

        printf("Roll number: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nStudent Details\n");
    for (i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll number: %d\n", students[i].roll_no);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
