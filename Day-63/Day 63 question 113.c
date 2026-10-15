// Find the kth smallest element by sorting the array in ascending order.
#include <stdio.h>

int main(void)
{
    int arr[1000], n, k, i, j, value;

    printf("Enter the array size (1-1000): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000)
    {
        printf("Invalid array size.\n");
        return 1;
    }
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) if (scanf("%d", &arr[i]) != 1) return 1;
    printf("Enter k (1-%d): ", n);
    if (scanf("%d", &k) != 1 || k < 1 || k > n)
    {
        printf("Invalid k.\n");
        return 1;
    }
    for (i = 1; i < n; i++)
    {
        value = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > value)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = value;
    }
    printf("Kth smallest element: %d\n", arr[k - 1]);
    return 0;
}
