#include <stdio.h>
/**
 * main - prints the alphabet in lowercase and then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphaLower = 'a';
	char alphaUpper = 'A';

	while (alphaLower <= 'z')
	{
		putchar (alphaLower);
		++alphaLower;
	}

	while (alphaUpper <= 'Z')
	{
		putchar (alphaUpper);
		++alphaUpper;
	}

	putchar ('\n');

	return (0);
}
