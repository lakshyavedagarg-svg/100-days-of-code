// Find the length of the longest substring without repeated characters.
#include <stdio.h>

int main(void)
{
    char text[1000];
    int last_seen[256], length = 0, left = 0, best = 0, i;

    for (i = 0; i < 256; i++) last_seen[i] = -1;
    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL) return 1;
    while (text[length] != '\0' && text[length] != '\n') length++;
    for (i = 0; i < length; i++)
    {
        unsigned char ch = (unsigned char)text[i];
        if (last_seen[ch] >= left) left = last_seen[ch] + 1;
        last_seen[ch] = i;
        if (i - left + 1 > best) best = i - left + 1;
    }
    printf("Longest substring length: %d\n", best);
    return 0;
}
