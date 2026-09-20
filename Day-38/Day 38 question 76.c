// Check whether a square matrix is symmetric about its main diagonal.
#include <stdio.h>

int main(void)
{
    int matrix[10][10], size, i, j, symmetric = 1;

    printf("Enter the square matrix size (1-10): ");
    if (scanf("%d", &size) != 1 || size < 1 || size > 10)
    {
        printf("Invalid matrix size.\n");
        return 1;
    }
    printf("Enter the matrix elements:\n");
    for (i = 0; i < size; i++)
        for (j = 0; j < size; j++)
            if (scanf("%d", &matrix[i][j]) != 1) return 1;

    for (i = 0; i < size; i++)
        for (j = i + 1; j < size; j++)
            if (matrix[i][j] != matrix[j][i]) symmetric = 0;
    printf("%s\n", symmetric ? "The matrix is symmetric." : "The matrix is not symmetric.");
    return 0;
}
