#include "main.h"
/**
 * string_toupper - Convert all lowercase letters in a string to uppercase.
 * @s: The string to convert.
 *
 * Return: A pointer to the resulting string s.
 */
char *string_toupper(char *s)
{
	int i = 0;

	for (; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}

	return (s);
}

