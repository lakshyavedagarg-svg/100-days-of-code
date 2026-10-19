// Merge two sorted arrays into one sorted array.
#include <stdio.h>

int main(void)
{
    int first[1000], second[1000], merged[2000];
    int m, n, i, j, out = 0;

    printf("Enter the first array size (0-1000): ");
    if (scanf("%d", &m) != 1 || m < 0 || m > 1000)
    {
        printf("Invalid array size.\n");
        return 1;
    }
    printf("Enter %d sorted elements:\n", m);
    for (i = 0; i < m; i++) if (scanf("%d", &first[i]) != 1) return 1;
    printf("Enter the second array size (0-1000): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 1000)
    {
        printf("Invalid array size.\n");
        return 1;
    }
    printf("Enter %d sorted elements:\n", n);
    for (j = 0; j < n; j++) if (scanf("%d", &second[j]) != 1) return 1;

    i = j = 0;
    while (i < m && j < n)
        merged[out++] = first[i] <= second[j] ? first[i++] : second[j++];
    while (i < m) merged[out++] = first[i++];
    while (j < n) merged[out++] = second[j++];
    printf("Merged array: ");
    for (i = 0; i < out; i++) printf("%d%s", merged[i], i + 1 == out ? "\n" : " ");
    if (out == 0) putchar('\n');
    return 0;
}
