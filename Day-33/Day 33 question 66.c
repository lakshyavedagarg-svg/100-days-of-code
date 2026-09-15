// Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main()
{
    int arr[100], n, i, newElement;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    if (n < 0 || n >= 100)
    {
        printf("Please enter a number of elements from 0 to 99.\n");
        return 1;
    }

    printf("Enter %d elements in the sorted array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the new element to be inserted: ");
    scanf("%d", &newElement);

    // Shift larger elements one position to the right.
    for (i = n - 1; i >= 0 && arr[i] > newElement; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[i + 1] = newElement;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
