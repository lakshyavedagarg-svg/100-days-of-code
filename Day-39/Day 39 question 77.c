// Check whether all values on a square matrix's main diagonal are distinct.
#include <stdio.h>

int main(void)
{
    int matrix[10][10], size, i, j, distinct = 1;

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
            if (matrix[i][i] == matrix[j][j]) distinct = 0;
    printf("%s\n", distinct ? "Diagonal elements are distinct." : "Diagonal elements are not distinct.");
    return 0;
}
