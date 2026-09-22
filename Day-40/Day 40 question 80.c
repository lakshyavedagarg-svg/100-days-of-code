// Multiply two matrices when their dimensions are compatible.
#include <stdio.h>

int main(void)
{
    int first[10][10], second[10][10];
    long long product[10][10] = {{0}};
    int rows1, cols1, rows2, cols2, i, j, k;

    printf("Enter rows and columns of the first matrix (1-10): ");
    if (scanf("%d %d", &rows1, &cols1) != 2 || rows1 < 1 || rows1 > 10 || cols1 < 1 || cols1 > 10)
    {
        printf("Invalid matrix dimensions.\n");
        return 1;
    }
    printf("Enter rows and columns of the second matrix (1-10): ");
    if (scanf("%d %d", &rows2, &cols2) != 2 || rows2 < 1 || rows2 > 10 || cols2 < 1 || cols2 > 10)
    {
        printf("Invalid matrix dimensions.\n");
        return 1;
    }
    if (cols1 != rows2)
    {
        printf("These matrices cannot be multiplied.\n");
        return 1;
    }
    printf("Enter the first matrix:\n");
    for (i = 0; i < rows1; i++)
        for (j = 0; j < cols1; j++)
            if (scanf("%d", &first[i][j]) != 1) return 1;
    printf("Enter the second matrix:\n");
    for (i = 0; i < rows2; i++)
        for (j = 0; j < cols2; j++)
            if (scanf("%d", &second[i][j]) != 1) return 1;

    for (i = 0; i < rows1; i++)
        for (j = 0; j < cols2; j++)
            for (k = 0; k < cols1; k++)
                product[i][j] += (long long)first[i][k] * second[k][j];
    printf("Product:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols2; j++)
            printf("%lld%s", product[i][j], j + 1 == cols2 ? "\n" : " ");
    }
    return 0;
}
