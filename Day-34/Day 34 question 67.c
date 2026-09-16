// Insert an element into an array at a given 1-based position.
#include <stdio.h>

int main(void)
{
    int arr[100], n, i, position, value;

    printf("Enter the number of elements (0-99): ");
    if (scanf("%d", &n) != 1 || n < 0 || n >= 100)
    {
        printf("Invalid number of elements.\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        if (scanf("%d", &arr[i]) != 1) return 1;
    printf("Enter the value and position (1-%d): ", n + 1);
    if (scanf("%d %d", &value, &position) != 2 || position < 1 || position > n + 1)
    {
        printf("Invalid position.\n");
        return 1;
    }
    for (i = n; i >= position; i--)
        arr[i] = arr[i - 1];
    arr[position - 1] = value;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
        printf("%d%s", arr[i], i + 1 == n ? "\n" : " ");
    return 0;
}
