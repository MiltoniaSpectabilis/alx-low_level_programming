#include "main.h"
/**
 * puts_half - Prints the second half or last n characters of a string.
 *
 * @str: The input string.
 */

void puts_half(char *str)
{
	int len = 0, i;

	/* calculate the length of the input string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* print the second half or last n characters of the string */
	if (len % 2 == 0) /* even number of characters */
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
	}

	else /* odd number of characters */
	{
		int n = (len - 1) / 2;

		for (i = len - n; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
