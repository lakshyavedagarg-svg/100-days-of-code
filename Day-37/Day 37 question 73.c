// Find the sum of each row of a matrix and store the sums in an array.
#include <stdio.h>

int main(void)
{
    int matrix[10][10], rows, cols, i, j;
    long long row_sums[10];

    printf("Enter rows and columns (1-10): ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows < 1 || rows > 10 || cols < 1 || cols > 10)
    {
        printf("Invalid matrix dimensions.\n");
        return 1;
    }

    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++)
    {
        row_sums[i] = 0;
        for (j = 0; j < cols; j++)
        {
            if (scanf("%d", &matrix[i][j]) != 1)
            {
                printf("Invalid matrix element.\n");
                return 1;
            }
            row_sums[i] += matrix[i][j];
        }
    }

    printf("Row sums: ");
    for (i = 0; i < rows; i++)
        printf("%lld%s", row_sums[i], i + 1 == rows ? "\n" : " ");
    return 0;
}
