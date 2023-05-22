#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: string to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0') 
	{
		len++;
	}

	if (len % 2 == 1)
	{

		for (i = ((len - 1) / 2); str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}

	else
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}

	putchar('\n');
}
