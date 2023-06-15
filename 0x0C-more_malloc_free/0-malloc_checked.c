#include <limits.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 *         If malloc fails, the function terminates the process with status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL || b == INT_MAX)
		exit(98);

	return (p);
}
