#include "main.h"

/**
 * _strlen_recursion - calculates the length of a string using recursion
 * @s: pointer to the input string
 *
 * Return: int - the length of the input string
 *
 * This function calculates the length of a string by recursively
 * counting the characters until the null terminator is reached.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
