#include "main.h"

/**
 * _pow_recursion - calculates the value of x raised to the power of y
 * using recursion
 * @x: base number
 * @y: exponent
 *
 * Return: int - the result of x raised to the power of y; or
 *              -1 if y is negative
 *
 * This function recursively computes the power of a base number x raised
 * to an exponent y. If y is negative, the function returns -1.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else
		return (x * _pow_recursion(x, y - 1));
}
