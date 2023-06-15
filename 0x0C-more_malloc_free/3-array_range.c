#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers containing
 *               values from min to max.
 * @min: The minimum value of the range.
 * @max: The maximum value of the range.
 *
 * Return: Pointer to the newly allocated array,
 *         or NULL on failure or if min > max.
 */
int *array_range(int min, int max)
{
	int *arr, arr_size, i = 0;

	if (min > max)
		return (NULL);

	arr_size = max - min + 1;

	arr = malloc(sizeof(int) * arr_size);
	if (arr == NULL)
		return (NULL);

	while (i < arr_size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
