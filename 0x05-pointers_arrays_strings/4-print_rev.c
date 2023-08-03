#include "main.h"

/**
 * print_rev - prints a string in reverse
 * followed by a new line
 *
 * @s: string to be printed
 */

void print_rev(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		p++;
	}

	while (p-- > s)
	{
		_putchar(*p);
	}
	_putchar('\n');
}
