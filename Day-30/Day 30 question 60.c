// Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main()
{
    int arr[100], n, i, positiveCount = 0, negativeCount = 0, zeroCount = 0;
    printf("Enter the number of elements in the array:");
    scanf("%d", &n);
    printf("Enter the elements in the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positiveCount++;
        }
        else if (arr[i] < 0)
        {
            negativeCount++;
        }
        else
        {
            zeroCount++;
        }
    }
    printf("number of positive elements: %d\n", positiveCount);
    printf("number of negative elements: %d\n", negativeCount);
    printf("number of zero: %d\n", zeroCount);
    return 0;
}