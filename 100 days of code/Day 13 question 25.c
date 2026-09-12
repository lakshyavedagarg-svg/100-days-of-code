// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main()
{
    float num1, num2, result;
    char operator;

    // Take two numbers and an operator as input
    printf("Enter two numbers and an operator (+, -, *, /, %%): ");
    scanf("%f %f %c", &num1, &num2, &operator);

    // Perform the operation based on the operator
    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("Result = %.2f", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Result = %.2f", result);
        break;
    case '*':
        result = num1 * num2;
        printf("Result = %.2f", result);
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("Result = %.2f", result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.");
        }
        break;
    case '%':
        if ((int)num2 != 0)
        {
            result = (int)num1 % (int)num2;
            printf("Result = %.2f", result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.");
        }
        break;
    default:
        printf("Error: Invalid operator.");
    }

    return 0; // End the program
}