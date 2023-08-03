#include "main.h"

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int i = 0;

	for (; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i] < 'n')
				s[i] = s[i] + 13;
			else
				s[i] = s[i] - 13;
		}

		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			if (s[i] < 'N')
				s[i] = s[i] + 13;
			else
				s[i] = s[i] - 13;
		}
	}

	return (s);
}
