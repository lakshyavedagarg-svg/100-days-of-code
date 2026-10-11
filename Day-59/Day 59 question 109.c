// Find the maximum sum among all contiguous subarrays of size k.
#include <stdio.h>

int main(void)
{
    int arr[1000], n, k, i;
    long long window_sum = 0, max_sum;

    printf("Enter the array size (1-1000): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000)
    {
        printf("Invalid array size.\n");
        return 1;
    }
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) if (scanf("%d", &arr[i]) != 1) return 1;
    printf("Enter window size k (1-%d): ", n);
    if (scanf("%d", &k) != 1 || k < 1 || k > n)
    {
        printf("Invalid window size.\n");
        return 1;
    }
    for (i = 0; i < k; i++) window_sum += arr[i];
    max_sum = window_sum;
    for (i = k; i < n; i++)
    {
        window_sum += arr[i] - arr[i - k];
        if (window_sum > max_sum) max_sum = window_sum;
    }
    printf("Maximum window sum: %lld\n", max_sum);
    return 0;
}
