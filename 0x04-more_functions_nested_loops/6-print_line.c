#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character "_" should be printed
 */

void print_line(int n)
{
	int x;

	for (x = 0; x < n ; x++)
	{
		if (n > 0)
			_putchar('_');
		else
			_putchar('\n');

	}

	_putchar('\n');


}
