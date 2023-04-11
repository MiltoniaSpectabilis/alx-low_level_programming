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
	for (n <= 98; n++)
	{
		for (n >= 98; n--)
		{
			printf("%d, ", n);

			if (n == 98)
			{
				printf("%d", n);

			}

		}
	}

}
