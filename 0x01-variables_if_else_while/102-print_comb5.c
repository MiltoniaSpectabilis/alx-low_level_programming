#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Always (0) (Success)
 */

#include <stdio.h>

int main(void)
{
	int fDigit, sDigit, tDigit, frDigit;

	for (fDigit = 48; fDigit < 58; ++fDigit)
	{
		for (sDigit = 48; sDigit < 58; ++sDigit)
		{
			for (tDigit = fDigit; tDigit < 58; ++tDigit)
			{
				for (frDigit = 48; frDigit < 58; ++frDigit)
				{
					if (fDigit == tDigit && frDigit <= sDigit)

					{

						continue;

					}

					putchar(fDigit);
					putchar(sDigit);
					putchar(' ');
					putchar(tDigit);
					putchar(frDigit);

					if (fDigit != 57 || sDigit != 56 || tDigit != 57 || frDigit != 57)

					{
						putchar(',');
						putchar(' ');
					}
				}

			}
		}
	}

	putchar('\n');

	return (0);
}
