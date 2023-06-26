#include "main.h"
#include <unistd.h>

/**
 * print_char - writes a single character to the standard output
 * @c: the character to be written
 *
 * Return: the number of bytes written, or -1 on error
 */
int print_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - writes a null-terminated string to the standard output
 * @str: the string to be written
 *
 * Return: the number of characters written, excluding the null terminator
 */
int print_string(const char *str)
{
	int count = 0;

	while (*str)
	{
		count += print_char(*str);
		str++;
	}
	return (count);
}

/**
 * process_specifiers - processes format specifiers for custom_printf
 * @format_str: the format string containing the specifier
 * @idx: the current index in the format string
 * @args_list: a va_list containing the arguments to be processed
 *
 * This function processes a single specifier and writes the corresponding
 * output to the standard output. The index is updated accordingly.
 *
 * Return: the number of characters written for the processed specifier
 */
int process_specifiers(const char *format_str, int *idx, va_list args_list)
{
	int characters_printed = 0;
	char *string_output;

	switch (format_str[*idx + 1])
	{
		case 'c':
			characters_printed += print_char(va_arg(args_list, int));
			break;
		case 's':
			string_output = va_arg(args_list, char *);
			if (string_output == NULL)
				string_output = "(null)";
			characters_printed += print_string(string_output);
			break;
		case '%':
			characters_printed += print_char('%');
			break;
		default:
			characters_printed += print_char('%');
			characters_printed += print_char(format_str[*idx + 1]);
			break;
	}

	*idx += 2;
	return (characters_printed);
}
