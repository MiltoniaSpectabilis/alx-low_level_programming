#include "main.h"
/**
 * print_second_half - Prints the second half or last n characters of a string.
 *
 * @str: The input string.
 */

void print_second_half(char *str)
{
    int len = 0;

    // calculate the length of the input string
    while (str[len] != '\0')
    {
        len++;
    }

    // print the second half or last n characters of the string
    if (len % 2 == 0) // even number of characters
    {
        for (int i = len / 2; str[i] != '\0'; i++)
        {
            putchar(str[i]);
        }
    }

    else // odd number of characters
    {
        int n = (len - 1) / 2;
        for (int i = len - n; str[i] != '\0'; i++)
        {
            putchar(str[i]);
        }
    }
    putchar('\n');
}
