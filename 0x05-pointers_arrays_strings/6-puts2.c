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
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;

	}

	_putchar('\n');

}
