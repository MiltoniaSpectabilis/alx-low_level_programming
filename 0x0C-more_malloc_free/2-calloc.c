#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - Allocates and initializes a memory block.
 * @nmemb: Number of elements to allocate.
 * @size: Size of each element.
 *
 * Return: Pointer to the allocated and initialized memory block,
 *         or NULL if allocation fails or either nmemb or size is 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr != NULL)
		memset(arr, 0, nmemb * size);
	else
		return (NULL);

	return (arr);
}
