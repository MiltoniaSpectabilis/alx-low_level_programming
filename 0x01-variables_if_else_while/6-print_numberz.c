#include <stdio.h>


/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int sDigit = 48;


	while (sDigit <= 57)

	{
		putchar(sDigit);
		++sDigit;
	}
	putchar('\n');

	return (0);
}
