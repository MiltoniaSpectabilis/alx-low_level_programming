#include "main.h"

/**
 *
 *
 *
 */

void times_table(void)
{

	int num1, num2, prod;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			prod = num1 * num2;

			if(prod == 0)
			{
				_putchar(prod + '0');
			}

			else if (prod >= 1 && prod <= 9)
			{
				_putchar(prod + '0');
			}
			else if (prod > 9)
			{
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}

			if (prod >= 1 && prod <= 9 && num2 != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (prod > 9 && num2 != 9)
			{
				_putchar(',');
				_putchar(' ');

			}
			else if ((prod <= 9 || prod > 9) && num2 ==9 )
			{

				_putchar('\n');
			}
		}
	}
}
