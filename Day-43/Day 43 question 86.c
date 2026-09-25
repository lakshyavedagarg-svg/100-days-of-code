// Check whether a string is a palindrome (case-sensitive, including spaces).
#include <stdio.h>

int main(void)
{
    char text[1000];
    int length = 0, left, right, palindrome = 1;

    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    while (text[length] != '\0' && text[length] != '\n')
        length++;
    left = 0;
    right = length - 1;
    while (left < right)
    {
        if (text[left] != text[right])
        {
            palindrome = 0;
            break;
        }
        left++;
        right--;
    }
    printf("%s\n", palindrome ? "The string is a palindrome." : "The string is not a palindrome.");
    return 0;
}
