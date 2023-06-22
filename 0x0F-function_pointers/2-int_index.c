#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the function used for value comparison.
 *
 * Return: Index of the first matching element, or -1 if no match or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp && size > 0)
	{
		int i = 0;

		while (i < size)
		{
			if (cmp(array[i]))
				return (i);

			i++;
		}
	}

	return (-1);
}
