/*Write a program to print all the prime numbers from 1 to n.*/
#include <stdio.h>
int main()
{
    int n, i, j, isPrime;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d are: ", n);
    for (i = 2; i <= n; i++)
    {
        isPrime = 1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            // after writting this line I was confused about what will happpen the n = 2
            // if n = 2 then the inner loop will not run becuse the condition j < i will be false for j = 2
            // so isPrime wil remain 1 and 2 will be printed as prime numeber which is correct.
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}