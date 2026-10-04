// Find the zero-based index of the first element greater than or equal to x.
// This is the lower bound (ceil) and takes O(log n) time.
#include <stdio.h>

int main(void)
{
    int arr[1000], n, x, i, left = 0, right, answer = -1;

    printf("Enter the array size (0-1000): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 1000)
    {
        printf("Invalid array size.\n");
        return 1;
    }
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++)
        if (scanf("%d", &arr[i]) != 1) return 1;
    printf("Enter x: ");
    if (scanf("%d", &x) != 1) return 1;

    right = n;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] >= x) right = mid;
        else left = mid + 1;
    }
    if (left < n) answer = left;
    printf("Ceil index: %d\n", answer);
    return 0;
}
