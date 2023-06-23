#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *sep = "";
	char c;
	int n;
	float f;
	char *s;

	va_start(args, format);

	while (format && format[i])
	{
		if (i > 0 && format[i - 1])
			sep = ", ";

		c = format[i];
		if (c == 'c')
		{
			printf("%s%c", sep, va_arg(args, int));
		}
		else if (c == 'i')
		{
			printf("%s%d", sep, va_arg(args, int));
		}
		else if (c == 'f')
		{
			printf("%s%f", sep, (float)va_arg(args, double));
		}
		else if (c == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				printf("%s(nil)", sep);
			else
				printf("%s%s", sep, s);
		}
		i++;
	}

	printf("\n");

	va_end(args);
}
