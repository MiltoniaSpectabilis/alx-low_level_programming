#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings, using at most n bytes from s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes to concatenate from s2.
 *
 * Return: Pointer to the newly allocated memory containing the concatenated
 *
 *         string, or NULL if the allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = 0;
	char *newstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = strlen(s1);

	newstr = malloc(sizeof(newstr) * (len + n + 1));
	if (newstr == NULL)
		return (NULL);

	strcpy(newstr, s1);
	strncat(newstr, s2, n);

	return (newstr);
}
