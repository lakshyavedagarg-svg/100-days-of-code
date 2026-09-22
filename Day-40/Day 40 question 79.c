// Traverse a matrix diagonal by diagonal, moving down and right on each diagonal.
#include <stdio.h>

int main(void)
{
    int matrix[10][10], rows, cols, i, j, start;

    printf("Enter rows and columns (1-10): ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows < 1 || rows > 10 || cols < 1 || cols > 10)
    {
        printf("Invalid matrix dimensions.\n");
        return 1;
    }
    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            if (scanf("%d", &matrix[i][j]) != 1) return 1;

    printf("Diagonal traversal:\n");
    for (start = 0; start < cols; start++)
    {
        i = 0;
        j = start;
        while (i < rows && j < cols)
        {
            printf("%d ", matrix[i][j]);
            i++;
            j++;
        }
    }
    for (start = 1; start < rows; start++)
    {
        i = start;
        j = 0;
        while (i < rows && j < cols)
        {
            printf("%d ", matrix[i][j]);
            i++;
            j++;
        }
    }
    printf("\n");
    return 0;
}
