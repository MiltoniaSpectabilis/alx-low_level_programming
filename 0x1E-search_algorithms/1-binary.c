#include <stdio.h>

/**
 * print_array - Prints a portion of the array.
 * @array: Pointer to the array.
 * @start: Starting index of the portion to print.
 * @end: Ending index of the portion to print.
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the value if found, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left;
	size_t right;
	size_t mid;

	if (array == NULL)
	{
		return (-1);
	}

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		print_array(array, left, right);

		mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}

		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	return (-1);
}

