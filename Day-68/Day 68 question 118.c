// Find the missing value from the integers 0 through n in an n-element array.
#include <stdio.h>

int main(void)
{
    int nums[1000], n, i, missing;

    printf("Enter n (1-1000): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000)
    {
        printf("Invalid n.\n");
        return 1;
    }
    printf("Enter %d distinct integers from 0 through %d, with one missing:\n", n, n);
    missing = n;
    for (i = 0; i < n; i++)
    {
        if (scanf("%d", &nums[i]) != 1 || nums[i] < 0 || nums[i] > n) return 1;
        missing ^= i ^ nums[i];
    }
    printf("Missing number: %d\n", missing);
    return 0;
}
