#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two integers passed as command line arguments
 * @argc: the number of argument passed to the program
 * @argv: an array containing the program arguments
 *
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n",  num1 * num2);

	return (0);
}

