// Product of array elements except self, using prefix and suffix products.
// Runs in O(n) time without division. Products are assumed to fit in 32 bits.
#include <stdio.h>

int main(void)
{
    int nums[1000], answer[1000], n, i;
    long long prefix = 1, suffix = 1;

    printf("Enter the array size (0-1000): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 1000)
    {
        printf("Invalid array size.\n");
        return 1;
    }
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
        if (scanf("%d", &nums[i]) != 1) return 1;
    for (i = 0; i < n; i++)
    {
        answer[i] = (int)prefix;
        prefix *= nums[i];
    }
    for (i = n - 1; i >= 0; i--)
    {
        answer[i] = (int)(answer[i] * suffix);
        suffix *= nums[i];
    }
    printf("Product array: ");
    for (i = 0; i < n; i++) printf("%d%s", answer[i], i + 1 == n ? "\n" : " ");
    if (n == 0) putchar('\n');
    return 0;
}
