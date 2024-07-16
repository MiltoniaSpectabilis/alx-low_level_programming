#include "search_algos.h"
#include <stdio.h>


/**
*linear_search - using linear search algo to find a value.
*@array: pointer to the first element.
*@size: size of the array.
*@value: value to be searched.
*Return: return the index in where the value was found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (array[i]);
		}
	}

	return (-1);
}
