#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	(void)argc;

	for (i = 0; argv[i]; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
