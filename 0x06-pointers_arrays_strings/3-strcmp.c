#include "main.h"
/**
 * _strcmp - Compare two strings lexicographically.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: The difference between the ASCII values of the first non-matching
 *         characters in s1 and s2. If the strings are identical, return 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] && s1[i] == s2[i]; i++)
	{

	}

	return (s1[i] - s2[i]);
}

