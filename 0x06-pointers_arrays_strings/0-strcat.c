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

	/* Find the end of the destination string */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Append the source string to the destination string */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Add null terminator to the end of the concatenated string */
	dest[i] = '\0';

	/* Return a pointer to the new, concatenated string */
	return (dest);
}
