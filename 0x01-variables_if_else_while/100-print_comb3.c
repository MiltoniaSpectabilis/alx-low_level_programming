#include <stdio.h>

/**
 * main - Prints all possible combinations of two different single-digit nums
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int fDigit, sDigit;

	for (fDigit = 48; fDigit < 58; fDigit++)
	{
		for (sDigit = fDigit + 1; sDigit < 58; sDigit++)
		{
			putchar(fDigit);
			putchar(sDigit);
			if (fDigit != 56 || sDigit != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
