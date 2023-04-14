#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9,
 * followed by a new line.
 */

void print_most_numbers(void)
{
	int randNum;

	for (; randNum <= 9; randNum++)
	{
		if (randNum == 2 || randNum == 4)

		_putchar(randNum + '0');
		_putchar('\n');

	}


}
