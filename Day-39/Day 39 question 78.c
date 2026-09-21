// Find the sum of the main diagonal of a square matrix.
#include <stdio.h>

int main(void)
{
    int matrix[10][10], size, i, j;
    long long sum = 0;

    printf("Enter the square matrix size (1-10): ");
    if (scanf("%d", &size) != 1 || size < 1 || size > 10)
    {
        printf("Invalid matrix size.\n");
        return 1;
    }
    printf("Enter the matrix elements:\n");
    for (i = 0; i < size; i++)
        for (j = 0; j < size; j++)
        {
            if (scanf("%d", &matrix[i][j]) != 1) return 1;
            if (i == j) sum += matrix[i][j];
        }
    printf("Main diagonal sum: %lld\n", sum);
    return 0;
}
