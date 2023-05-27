#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string.
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
			str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}
	return (str);

}



