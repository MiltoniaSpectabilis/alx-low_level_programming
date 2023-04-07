#include <stdio.h>


/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int digit = 48;
	char alpha = 'a';

	for (; digit <= 57; ++digit)
		putchar(digit);

	for (; alpha < 'g'; ++alpha)
		putchar(alpha);

	putchar('\n');

	return (0);
}
