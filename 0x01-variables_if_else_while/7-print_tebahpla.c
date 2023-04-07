#include <stdio.h>


/**
 * main - prints the lowercase alphabet in reverse, followed by a new line
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char alpha = 'z';

	for (alpha; alpha >= 'a'; --alpha)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
