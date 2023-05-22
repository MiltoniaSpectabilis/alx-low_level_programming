#include "main.h"


/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * followed by a new line
 *
 * @str: string of characters to be printed
 */

void puts2(char *str)
{
	int i;

	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
