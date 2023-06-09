#include <stdio.h>
#include "main.h"

/**
 * main - calculates the sum of integers passed as command line arguments
 * @argc: the number of argument passed to the program
 * @argv: an array containing the program arguments
 *
 * Return: 0 if calculation succeeds, 1 if there is an error
 */


int main(int argc, char *argv[])
{
	int i, j, num, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		num = atoi(argv[i]);

		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
