#include <stdio.h>
#include <string.h>

void longestPalindrome(char s[]) {
    int n = strlen(s);
    int start = 0, maxLen = 1;

    for (int i = 0; i < n; i++) {
        // Odd length palindrome
        int left = i, right = i;
        while (left >= 0 && right < n && s[left] == s[right]) {
            if (right - left + 1 > maxLen) {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }

        // Even length palindrome
        left = i;
        right = i + 1;
        while (left >= 0 && right < n && s[left] == s[right]) {
            if (right - left + 1 > maxLen) {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }
    }

    printf("Longest Palindromic Substring: ");
    for (int i = start; i < start + maxLen; i++)
        printf("%c", s[i]);
    printf("\n");
}

int main() {
    char s[1000];

    printf("Enter string: ");
    scanf("%s", s);

    longestPalindrome(s);

    return 0;
}
