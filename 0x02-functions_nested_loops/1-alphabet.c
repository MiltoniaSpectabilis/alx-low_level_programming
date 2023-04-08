#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet followed by a new line
 */

void print_alphabet(void)

{
	char alphbt;

	for (alphbt = 'a'; alphbt <= 'z'; alphbt++)

	{
		_putchar(alphbt);
	}

	_putchar('\n');
}
