#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicate a string.
 * @str: The string to duplicate.
 *
 * Return: On success, returns a pointer to the duplicated string.
 *         On failure, returns NULL.
 */
char *_strdup(char *str)
{
	unsigned int len = 0, i = 0;
	char *string;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	string = malloc((len + 1) * sizeof(char));

	if (string == NULL)
		return (NULL);

	while (i < len)
	{
		string[i] = str[i];
		i++;
	}
	string[i] = '\0';

	return (string);
}
