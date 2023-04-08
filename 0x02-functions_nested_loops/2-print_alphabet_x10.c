#include "main.h"

/**
 * print_alphabet_x10 -  prints the alphabet ten times followed by a new line
 */

void print_alphabet_x10(void)

{
	int i = 0;
	char alphbt;

	while (i < 10)
	{
		for (alphbt = 'a'; alphbt <= 'z'; alphbt++)
		{
			_putchar(alphbt);
		}
		_putchar('\n');
		i++;
	}

}
