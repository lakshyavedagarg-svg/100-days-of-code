// Print the first negative value in each window of size k, or 0 if none.
#include <stdio.h>

int main(void)
{
    int arr[1000], negatives[1000], n, k, i, front = 0, back = 0;

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
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0) negatives[back++] = i;
        while (front < back && negatives[front] <= i - k) front++;
        if (i >= k - 1)
            printf("%d%s", front < back ? arr[negatives[front]] : 0, i == n - 1 ? "\n" : " ");
    }
    return 0;
}
