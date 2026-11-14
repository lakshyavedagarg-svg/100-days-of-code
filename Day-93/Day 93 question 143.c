// Use an enum to identify and print the student with the highest marks.
#include <stdio.h>

enum Student
{
    STUDENT_1,
    STUDENT_2,
    STUDENT_3,
    STUDENT_4,
    STUDENT_5
};

struct StudentDetails
{
    char name[50];
    int roll_no;
    float marks;
};

int main(void)
{
    struct StudentDetails students[5];
    enum Student highest_student = STUDENT_1;
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

        if (i == 0 || students[i].marks > students[highest_student].marks)
        {
            highest_student = (enum Student)i;
        }
    }

    printf("\nStudent with the highest marks\n");
    printf("Name: %s\n", students[highest_student].name);
    printf("Roll number: %d\n", students[highest_student].roll_no);
    printf("Marks: %.2f\n", students[highest_student].marks);

    return 0;
}
