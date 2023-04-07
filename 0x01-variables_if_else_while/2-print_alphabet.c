#include <stdio.h>


/**
 * main - prints alphabet in lower case followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		++alpha;
	}

	putchar('\n');

	return (0);
}
