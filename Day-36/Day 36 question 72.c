// Find the sum of all elements in a matrix.
#include <stdio.h>

int main(void)
{
    int matrix[10][10], rows, cols, i, j;
    long long sum = 0;

    printf("Enter rows and columns (1-10): ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows < 1 || rows > 10 || cols < 1 || cols > 10)
    {
        printf("Invalid matrix dimensions.\n");
        return 1;
    }
    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
        {
            if (scanf("%d", &matrix[i][j]) != 1)
            {
                printf("Invalid matrix element.\n");
                return 1;
            }
            sum += matrix[i][j];
        }
    printf("Sum of all elements: %lld\n", sum);
    return 0;
}
