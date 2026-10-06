// Find x in [1,n] for which 1+...+x equals x+...+n.
// The equality reduces to x*x = n*(n+1)/2, so binary search is O(log n).
#include <stdio.h>

int main(void)
{
    int n;
    long long total, left = 1, right, pivot = -1;

    printf("Enter a positive integer n (at most 2000000000): ");
    if (scanf("%d", &n) != 1 || n < 1)
    {
        printf("Invalid input.\n");
        return 1;
    }
    total = (long long)n * (n + 1LL) / 2;
    right = n;
    while (left <= right)
    {
        long long mid = left + (right - left) / 2;
        long long square = mid * mid;
        if (square == total)
        {
            pivot = mid;
            break;
        }
        if (square < total) left = mid + 1;
        else right = mid - 1;
    }
    printf("Pivot integer: %lld\n", pivot);
    return 0;
}
