// Read and print a matrix.
#include <stdio.h>
int main()
{
    int matrix[10][10], rows, cols, i, j;

    printf("Enter the number of rows (max 10): ");
    scanf("%d", &rows);
    printf("Enter the number of columns (max 10): ");
    scanf("%d", &cols);

    if (rows < 1 || rows > 10 || cols < 1 || cols > 10)
    {
        printf("Please enter valid dimensions for the matrix (1-10).\n");
        return 1;
    }

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The entered matrix is:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}