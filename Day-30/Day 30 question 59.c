// Count even and odd numbers in an array.
#include <stdio.h>
int main()
{
    int arr[100], n, i, evenCount = 0, oddCount = 0;
    printf("Enter number of elements in the array:");
    scanf("%d", &n);
    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    printf("Number of even number in the array is: %d \n", evenCount);
    printf("Number of odd number in the array is: %d \n", oddCount);

    return 0;
}