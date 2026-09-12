// Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    // Take temperature in Celsius as input
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display the temperature in Fahrenheit
    printf("Fahrenheit=%.2f", fahrenheit);

    return 0; // End the program
}
