#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: natural number
 *
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);

			if (i == 98)
			{
				printf("%d", i);
			}
		}

	if (n >= 98)
	{
		for (n = j; j >= 98; n--)
		{
			printf("%d, ", j);
			if (j == 98)
			{
				printf("%d", j);
			}
		}


	}
	printf("\n");

	}
}
