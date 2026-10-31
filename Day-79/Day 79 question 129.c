// Read integers from numbers.txt and print their sum and average.
#include <stdio.h>

int main(void)
{
    FILE *file = fopen("numbers.txt", "r");
    int value, result;
    long long sum = 0, count = 0;

    if (file == NULL)
    {
        perror("Could not open numbers.txt");
        return 1;
    }
    while ((result = fscanf(file, "%d", &value)) == 1)
    {
        sum += value;
        count++;
    }
    if (result != EOF || ferror(file))
    {
        printf("numbers.txt contains invalid data or could not be read.\n");
        fclose(file);
        return 1;
    }
    fclose(file);
    if (count == 0)
    {
        printf("numbers.txt contains no integers.\n");
        return 1;
    }
    printf("Sum: %lld\nAverage: %.2f\n", sum, (double)sum / count);
    return 0;
}
