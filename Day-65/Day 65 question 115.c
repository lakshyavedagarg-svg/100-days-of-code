// Check whether two lowercase strings are anagrams.
#include <stdio.h>

int main(void)
{
    char s[1000], t[1000];
    int counts[26] = {0}, i, anagram = 1;

    printf("Enter string s (lowercase): ");
    if (fgets(s, sizeof s, stdin) == NULL) return 1;
    printf("Enter string t (lowercase): ");
    if (fgets(t, sizeof t, stdin) == NULL) return 1;
    for (i = 0; s[i] != '\0' && s[i] != '\n'; i++)
    {
        if (s[i] < 'a' || s[i] > 'z')
        {
            printf("Input must contain lowercase letters only.\n");
            return 1;
        }
        counts[s[i] - 'a']++;
    }
    for (i = 0; t[i] != '\0' && t[i] != '\n'; i++)
    {
        if (t[i] < 'a' || t[i] > 'z')
        {
            printf("Input must contain lowercase letters only.\n");
            return 1;
        }
        counts[t[i] - 'a']--;
    }
    for (i = 0; i < 26; i++) if (counts[i] != 0) anagram = 0;
    printf("%s\n", anagram ? "Anagram" : "Not Anagram");
    return 0;
}
