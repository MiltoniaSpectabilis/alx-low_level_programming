#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: the number of arguments passed through the function.
 *
 * Return: Sum of datas.
 */
int sum_them_all(const unsigned int n, ...)
{
	int i = 0, sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}

	va_end(args);

	return (sum);
}
