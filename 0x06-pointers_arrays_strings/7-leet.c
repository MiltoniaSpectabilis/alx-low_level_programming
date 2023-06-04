#include "main.h"
/**
 * leet - Convert a string to "leet" or "1337" speak.
 * @s: The string to convert.
 *
 * Return: A pointer to the resulting string s.
 */
char *leet(char *s)
{
	int i = 0, j;
	char leet[5] = {'a', 'e', 'o', 't', 'l'};
	char leet_replacements[5] = {'4', '3', '0', '7', '1'};

	for (; s[i]; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == leet[j] || s[i] == leet[j] - 32)
				s[i] = leet_replacements[j];
		}
	}

	return (s);
}
