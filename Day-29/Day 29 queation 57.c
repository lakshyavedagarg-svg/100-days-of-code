// Find the sum of array elements.

#include <stdio.h>
int main()
{
    int arr[100], n, i, sum = 0;
    printf("Enter the number of elements in the array:");
    scanf("%d", &n);
    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of array elements is: %d", sum);
    return 0;
}