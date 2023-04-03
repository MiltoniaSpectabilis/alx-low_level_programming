#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to search
 * @needle: the substring to search for
 *
 * Return: pointer to the beginning of the located substring, or NULL if not
 * found
 */

char *_strstr(char *haystack, char *needle) {
    int haystack_len = strlen(haystack);
    int needle_len = strlen(needle);
    int i, j;

    for (i = 0; i <= haystack_len - needle_len; i++) {
        for (j = 0; j < needle_len; j++) {
            if (haystack[i + j] != needle[j]) {
                break;
            }
        }
        if (j == needle_len) {
            return &haystack[i];
        }
    }

    return NULL;
}

