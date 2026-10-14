// Find the maximum sum of a non-empty contiguous subarray (Kadane's algorithm).
#include <stdio.h>

int main(void)
{
    int arr[1000], n, i;
    long long current_sum, max_sum;

    printf("Enter the array size (1-1000): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000)
    {
        printf("Invalid array size.\n");
        return 1;
    }
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) if (scanf("%d", &arr[i]) != 1) return 1;
    current_sum = max_sum = arr[0];
    for (i = 1; i < n; i++)
    {
        if (current_sum < 0) current_sum = arr[i];
        else current_sum += arr[i];
        if (current_sum > max_sum) max_sum = current_sum;
    }
    printf("Maximum subarray sum: %lld\n", max_sum);
    return 0;
}
