// Use an enum for menu choices and perform the selected arithmetic operation.
#include <stdio.h>

enum Operation
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main(void)
{
    long long first, second;
    int choice;
    enum Operation operation;

    printf("Choose an operation (1=ADD, 2=SUBTRACT, 3=MULTIPLY): ");
    if (scanf("%d", &choice) != 1 || choice < ADD || choice > MULTIPLY)
    {
        printf("Invalid menu choice.\n");
        return 1;
    }
    operation = (enum Operation)choice;
    printf("Enter two integers: ");
    if (scanf("%lld %lld", &first, &second) != 2)
    {
        printf("Invalid numbers.\n");
        return 1;
    }

    switch (operation)
    {
        case ADD:
            printf("Result: %lld\n", first + second);
            break;
        case SUBTRACT:
            printf("Result: %lld\n", first - second);
            break;
        case MULTIPLY:
            printf("Result: %lld\n", first * second);
            break;
    }
    return 0;
}
