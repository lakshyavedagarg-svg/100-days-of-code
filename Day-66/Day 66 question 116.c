// Find two distinct indices whose positive values add up to target.
#include <stdio.h>

int main(void)
{
    int nums[1000], n, target, i, j;

    printf("Enter the array size (0-1000): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 1000)
    {
        printf("Invalid array size.\n");
        return 1;
    }
    printf("Enter %d positive integers:\n", n);
    for (i = 0; i < n; i++)
        if (scanf("%d", &nums[i]) != 1 || nums[i] <= 0) return 1;
    printf("Enter the target: ");
    if (scanf("%d", &target) != 1) return 1;
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if ((long long)nums[i] + nums[j] == target)
            {
                printf("%d %d\n", i, j);
                return 0;
            }
    printf("-1 -1\n");
    return 0;
}
