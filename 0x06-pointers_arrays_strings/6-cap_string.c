#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= ('a' - 'A');

	while (str[i])
	{

		if ((str[i] == ' ' ||
					str[i] == '\t' ||
					str[i] == '.' ||
					str[i] == ',' ||
					str[i] == ';' ||
					str[i] == '!' ||
					str[i] == '?' ||
					str[i] == '"' ||
					str[i] == '(' ||
					str[i] == ')' ||
					str[i] == '{' ||
					str[i] == '}' ||
					str[i] == '\n') &&
				str[i + 1] >= 'a' &&
				str[i + 1] <= 'z')
		{
			i++;
			str[i] = str[i] - 'a' + 'A'; /* or you can use -32 which is the ASCII value of ('A' - 'a') */
		}
		i++;
	}
	return str;

}


