#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: the destination string to concatenate to
 * @src: the string to be appended to dest
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;

	for (; src[j]; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
