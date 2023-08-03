#include "main.h"

/**
 * _strncpy - Copy at most n characters of src to dest.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to copy from src.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	for (; src[i] && i < n; j++, i++)
		dest[j] = src[i];

	for (; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
