// Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, time;
    float simpleInterest, compoundInterest;

    // Take principal, rate, and time as input
    scanf("%f %f %f", &principal, &rate, &time);

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Calculate compound interest
    compoundInterest = principal *
                           pow((1 + rate / 100), time) -
                       principal;

    // Display both interests
    printf("Simple Interest=%.2f, Compound Interest=%.2f",
           simpleInterest, compoundInterest);

    return 0; // End the program
}