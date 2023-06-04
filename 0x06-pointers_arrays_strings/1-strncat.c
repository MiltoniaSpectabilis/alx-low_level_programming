#include "main.h"

/**
 * _strncat - Concatenate two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to be used from src.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	for (; dest[i]; i++)
	{

	}

	for (; src[j] && j < n; i++, j++)
		dest[i] = src[j];

	return (dest);
}
