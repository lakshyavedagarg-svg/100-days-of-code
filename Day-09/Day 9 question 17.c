// Q17: Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, D;
    float root1, root2, realPart, imaginaryPart;

    // Take coefficients a, b and c as input
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the discriminant
    D = b * b - 4 * a * c;

    // Check if the roots are real and different
    if (D > 0)
    {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);

        printf("Real and Different Roots\n");
        printf("Root1=%.2f, Root2=%.2f", root1, root2);
    }
    // Check if the roots are real and equal
    else if (D == 0)
    {
        root1 = -b / (2 * a);

        printf("Real and Equal Roots\n");
        printf("Root1=%.2f, Root2=%.2f", root1, root1);
    }
    // If D is negative, roots are complex
    else
    {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-D) / (2 * a);

        printf("Complex Roots\n");
        printf("Root1=%.2f+%.2fi, Root2=%.2f-%.2fi",
               realPart, imaginaryPart,
               realPart, imaginaryPart);
    }

    return 0; // End the program
}