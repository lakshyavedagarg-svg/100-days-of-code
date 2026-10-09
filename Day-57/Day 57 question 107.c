// Find each element's previous greater element using a brute-force scan.
#include <stdio.h>

int main(void)
{
    int arr[1000], previous[1000], n, i, j;

    printf("Enter the array size (0-1000): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 1000)
    {
        printf("Invalid array size.\n");
        return 1;
    }
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
        if (scanf("%d", &arr[i]) != 1) return 1;
    for (i = 0; i < n; i++)
    {
        previous[i] = -1;
        for (j = i - 1; j >= 0; j--)
            if (arr[j] > arr[i])
            {
                previous[i] = arr[j];
                break;
            }
    }
    printf("Previous greater elements: ");
    for (i = 0; i < n; i++)
        printf("%d%s", previous[i], i + 1 == n ? "\n" : ", ");
    if (n == 0) putchar('\n');
    return 0;
}
