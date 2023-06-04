#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = n - 1, j = 0, temp;

	for (; j < i; j++, i--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;

	}
}

