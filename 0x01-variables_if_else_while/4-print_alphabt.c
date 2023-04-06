#include <stdio.h>


/**
 * main - prints alphabet in lower case followed by a new line.
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char alphbt = 'a';

	while (alphbt <= 'z')
	{
		if (alphbt != 'e' && alphbt != 'q')
		{
			putchar (alphbt);
		}
		++alphbt;
	}

	putchar ('\n');

	return (0);
}
