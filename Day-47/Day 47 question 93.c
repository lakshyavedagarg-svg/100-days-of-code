// Check whether two strings are anagrams (case-insensitive; ignore nonletters).
#include <stdio.h>

int main(void)
{
    char first[1000], second[1000];
    int counts[26] = {0};
    int i, anagram = 1;

    printf("Enter the first string: ");
    if (fgets(first, sizeof first, stdin) == NULL) return 1;
    printf("Enter the second string: ");
    if (fgets(second, sizeof second, stdin) == NULL) return 1;
    for (i = 0; first[i] != '\0' && first[i] != '\n'; i++)
    {
        char ch = first[i];
        if (ch >= 'A' && ch <= 'Z') ch = (char)(ch - 'A' + 'a');
        if (ch >= 'a' && ch <= 'z') counts[ch - 'a']++;
    }
    for (i = 0; second[i] != '\0' && second[i] != '\n'; i++)
    {
        char ch = second[i];
        if (ch >= 'A' && ch <= 'Z') ch = (char)(ch - 'A' + 'a');
        if (ch >= 'a' && ch <= 'z') counts[ch - 'a']--;
    }
    for (i = 0; i < 26; i++)
        if (counts[i] != 0) anagram = 0;
    printf("%s\n", anagram ? "The strings are anagrams." : "The strings are not anagrams.");
    return 0;
}
