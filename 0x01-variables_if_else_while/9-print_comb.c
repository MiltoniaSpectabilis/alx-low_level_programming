#include <stdio.h>


/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int sDigit = 48;

	for (; sDigit <= 57; ++sDigit)

	{
		putchar(sDigit);

		if (sDigit != 57)

		{

			putchar(',');
			putchar(' ');
		}

	}

	putchar('\n');

	return (0);
}
