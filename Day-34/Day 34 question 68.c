// Insert an element in an array at a given position.
#include <stdio.h>
int main()
{
    int arr[100], n, i, pos, newElement;

    printf("Enter the number of elements in the arrray:");
    scanf("%d", &n);
    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the postion where the new elements to be inserted;");
    scanf("%d", &pos);
    if (pos < 0 || pos > n)
    {
        printf("Invalid position! Please enter a postion from 0 to %d.\n", n);
        return 1;
    }
    printf("Enter the new element to be inserted:");
    scanf("%d", &newElement);
    // Shift elemtents to the right to make space for the new elements
    for (i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = newElement;
    printf("Element inserted successfully!\n");
    printf("The updated array is:\n");
    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}