#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: On success, returns a pointer to the concatenated string.
 *         On failure, returns NULL.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	char *str;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	str = malloc((len1 + len2 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}

	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}

	str[i + j] = '\0';

	return (str);
}

