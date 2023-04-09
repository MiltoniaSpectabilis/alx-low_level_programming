#include "main.h"

/**
 * print_sign - prints the sign of a number n
 *
 * @n: random number
 *
 * Return: returns 1 if n is positive, 0 if n equals 0
 *and -1 if n is negative
 */

int print_sign(int n)
{

	if (n > 48)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}

}
