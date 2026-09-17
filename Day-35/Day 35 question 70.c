// Rotate an array to the right by k positions.
#include <stdio.h>
int main()
{
    int arr[100], n, k, i, j, temp;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 0 || n >= 100)
    {
        printf("Please enter a number of elements from 0 to 99.\n");
        return 1;
    }

    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate the array: ");
    scanf("%d", &k);

    // Normalize k to be within the bounds of the array length
    k = k % n;

    // Rotate the array to the right by k positions
    for (i = 0; i < k; i++)
    {
        temp = arr[n - 1];
        for (j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }

    printf("Array after rotating to the right by %d positions:\n", k);
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}