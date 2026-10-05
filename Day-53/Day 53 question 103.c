// Find the leftmost pivot index where the sums on both sides are equal.
#include <stdio.h>

int main(void)
{
    int nums[1000], n, i, pivot = -1;
    long long total = 0, left_sum = 0;

    printf("Enter the array size (0-1000): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 1000)
    {
        printf("Invalid array size.\n");
        return 1;
    }
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        if (scanf("%d", &nums[i]) != 1) return 1;
        total += nums[i];
    }
    for (i = 0; i < n; i++)
    {
        if (left_sum == total - left_sum - nums[i])
        {
            pivot = i;
            break;
        }
        left_sum += nums[i];
    }
    printf("Pivot index: %d\n", pivot);
    return 0;
}
