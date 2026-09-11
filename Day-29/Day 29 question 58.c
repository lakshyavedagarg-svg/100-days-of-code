// Find the maximum and minimum element in an array.
#include <stdio.h>
int main()
{
    int arr[100], n, i, max, min;
    printf("Enter the number of element in thte array:");
    scanf("%d", &n);
    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Maximum element in the array is: %d\n", max);
    printf("Minimum element in the array is: %d\n", min);
    return 0;
}