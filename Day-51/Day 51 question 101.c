// Find the first and last zero-based indices of a target in a sorted array.
// Two binary searches keep the running time O(log n).
#include <stdio.h>

int firstOccurrence(const int nums[], int n, int target)
{
    int left = 0, right = n - 1, answer = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] >= target)
        {
            if (nums[mid] == target) answer = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }
    return answer;
}

int lastOccurrence(const int nums[], int n, int target)
{
    int left = 0, right = n - 1, answer = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] <= target)
        {
            if (nums[mid] == target) answer = mid;
            left = mid + 1;
        }
        else right = mid - 1;
    }
    return answer;
}

int main(void)
{
    int nums[1000], n, target, i;
    printf("Enter the array size (0-1000): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 1000)
    {
        printf("Invalid array size.\n");
        return 1;
    }
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++)
        if (scanf("%d", &nums[i]) != 1) return 1;
    printf("Enter the target: ");
    if (scanf("%d", &target) != 1) return 1;
    printf("First and last indices: %d %d\n",
           firstOccurrence(nums, n, target), lastOccurrence(nums, n, target));
    return 0;
}
