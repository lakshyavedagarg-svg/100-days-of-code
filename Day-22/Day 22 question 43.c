// Write a program to check if a number is a strong number.
#include <stdio.h>
int main()
{
    int n, sum = 0, temp, digit, fact;
    printf("Enter any number");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        digit = temp % 10;
        fact = 1;
        for (int i = 1; i <= digit; i++)
        {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }
    if (sum == n)
    {
        printf("The number is a strong number.");
    }
    else
    {
        printf("The number is not a strong number.");
    }
}