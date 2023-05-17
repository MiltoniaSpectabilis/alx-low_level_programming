#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the times table to be printed
 */

void print_times_table(int n)
{
	if (m < 15 || m > 0)
	{
		for (i = 0; i <= m; i++)
		{
			for (j = 0; j <= m; j++)
			{
				prod = i * j;

				if (j == 0)
				{
					putchar(prod + '0');
				}

				else if (prod <= 9)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar(' ');
					putchar(prod + '0');
				}

				else if (prod <= 99)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar(prod / 10 + '0');
					putchar(prod % 10 + '0');
				}

				else
				{
					putchar(',');
					putchar(' ');
					putchar(prod / 100 + '0');
					putchar((prod / 10) % 10 + '0');
					putchar(prod % 10 + '0');
				}
			}
			putchar('\n');
		}


	}
}

