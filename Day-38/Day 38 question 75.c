// Add two matrices of the same dimensions.
#include <stdio.h>

int main(void)
{
    int first[10][10], second[10][10], rows, cols, i, j;

    printf("Enter rows and columns (1-10): ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows < 1 || rows > 10 || cols < 1 || cols > 10)
    {
        printf("Invalid matrix dimensions.\n");
        return 1;
    }
    printf("Enter the first matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            if (scanf("%d", &first[i][j]) != 1) return 1;
    printf("Enter the second matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            if (scanf("%d", &second[i][j]) != 1) return 1;

    printf("Sum:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%d%s", first[i][j] + second[i][j], j + 1 == cols ? "\n" : " ");
    }
    return 0;
}
