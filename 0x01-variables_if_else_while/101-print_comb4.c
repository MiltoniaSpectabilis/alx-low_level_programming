#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int fDigit, sDigit, tDigit;

	for (fDigit = 48; fDigit < 56; ++fDigit)
	{
		for (sDigit = fDigit + 1; sDigit < 57; ++sDigit)
		{
			for (tDigit = sDigit + 1; tDigit < 58; ++tDigit)
			{
				putchar(fDigit);
				putchar(sDigit);
				putchar(tDigit);

				if (fDigit != 55 || sDigit != 56 || tDigit != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
