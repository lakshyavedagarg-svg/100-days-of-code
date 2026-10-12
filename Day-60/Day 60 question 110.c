// Print the maximum element in each window of size k using a deque.
#include <stdio.h>

int main(void)
{
    int arr[1000], deque[1000], n, k, i, front = 0, back = 0;

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
        while (front < back && deque[front] <= i - k) front++;
        while (front < back && arr[deque[back - 1]] <= arr[i]) back--;
        deque[back++] = i;
        if (i >= k - 1) printf("%d%s", arr[deque[front]], i == n - 1 ? "\n" : " ");
    }
    return 0;
}
