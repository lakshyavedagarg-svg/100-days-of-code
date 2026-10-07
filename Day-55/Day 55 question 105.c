// Find the majority element, which must occur more than floor(n/2) times.
// Boyer-Moore voting finds a candidate in O(n); a second pass verifies it.
#include <stdio.h>

int main(void)
{
    int nums[1000], n, i, candidate = 0, balance = 0, count = 0;

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
        if (balance == 0)
        {
            candidate = nums[i];
            balance = 1;
        }
        else if (nums[i] == candidate) balance++;
        else balance--;
    }
    for (i = 0; i < n; i++)
        if (nums[i] == candidate) count++;
    printf("Majority element: %d\n", count > n / 2 ? candidate : -1);
    return 0;
}
