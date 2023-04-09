#include "main.h"

/**
 * print_last_digit - computes the absolute value of an integer.
 *
 * @number: random integer.
 *
 * Return: the value of the last digit
 */

int print_last_digit(int number)
{

	if (number < 0 || number > 0)
	{
	_putchar (number % 10);
	}

	return (number % 10);

}
