// Search for an element in an array using linear search
#include <stdio.h>

int main(void)
{
    int arr[100], n, i, searchElement, found = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements in the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &searchElement);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == searchElement)
        {
            found = 1;
            printf("Element found at index %d\n", i);
            break;
        }
    }

    if (!found)
    {
        printf("Element not found in the array.\n");
    }

    return 0;
}
