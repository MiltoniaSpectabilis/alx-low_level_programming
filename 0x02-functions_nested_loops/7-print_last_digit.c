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
	int lastDigit;

	if (number < 0)
	{
		number = -number;
	}

	lastDigit = number % 10;


	_putchar (lastDigit + '0');


	return (lastDigit);
}
