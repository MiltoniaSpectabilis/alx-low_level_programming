#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 *
 */

void jack_bauer(void)
{

	for (i = 0; i < 24; i++)
	{
		for (k = 0; k < 60; i++)
		{
			_putchar(i + '0');
			_putchar(':');
			_putchar(k + '0');
		}
	}
}
