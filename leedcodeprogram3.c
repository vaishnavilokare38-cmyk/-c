#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int last[256];
    int i, start = 0, maxLen = 0;

    // Initialize all positions to -1
    for (i = 0; i < 256; i++)
        last[i] = -1;

    for (i = 0; s[i] != '\0'; i++) {
        if (last[(unsigned char)s[i]] >= start)
            start = last[(unsigned char)s[i]] + 1;

        last[(unsigned char)s[i]] = i;

        if (i - start + 1 > maxLen)
            maxLen = i - start + 1;
    }

    return maxLen;
}

int main() {
    char s[1000];

    printf("Enter string: ");
    scanf("%s", s);

    printf("Length of longest substring: %d\n", lengthOfLongestSubstring(s));

    return 0;
}
