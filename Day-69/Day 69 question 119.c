// Find the repeated integer in one pass using a hash set.
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main(void)
{
    int n, i, value, found = 0, repeated = 0;
    size_t capacity, slot;
    int *keys;
    unsigned char *occupied;

    printf("Enter the number of elements (1-100000): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100000)
    {
        printf("Invalid array size.\n");
        return 1;
    }
    capacity = (size_t)n * 2 + 1;
    keys = (int *)malloc(capacity * sizeof *keys);
    occupied = (unsigned char *)calloc(capacity, sizeof *occupied);
    if (keys == NULL || occupied == NULL)
    {
        free(keys);
        free(occupied);
        printf("Unable to allocate memory.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        if (scanf("%d", &value) != 1)
        {
            free(keys);
            free(occupied);
            printf("Invalid input.\n");
            return 1;
        }
        slot = ((size_t)(unsigned int)value * 2654435761u) % capacity;
        while (occupied[slot] && keys[slot] != value)
            slot = (slot + 1) % capacity;
        if (occupied[slot])
        {
            repeated = value;
            found = 1;
            break;
        }
        occupied[slot] = 1;
        keys[slot] = value;
    }
    free(keys);
    free(occupied);
    if (found) printf("Repeated element: %d\n", repeated);
    else printf("No repeated element found.\n");
    return 0;
}
