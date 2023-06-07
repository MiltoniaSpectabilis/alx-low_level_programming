#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: the input integer for which the factorial is calculated
 *
 * Return: int - the factorial of the input number; -1 for negative input
 *
 * This function calculates the factorial of a given number using recursion.
 * It returns the factorial as an integer. If the input number is negative, it
 * returns -1 to indicate an error.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));

}
