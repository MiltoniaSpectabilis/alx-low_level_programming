#include "main.h"


/**
 * _printf - a custom printf function implementation
 * written by Wissal Erramoud and Omar Ouali
 * @format: format string containing zero or more directives
 *
 * Return: total number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args_list;
	int total_characters = 0, index = 0;

	if (format == NULL)
		return (-1);

	va_start(args_list, format);

	while (format[index] != '\0')
	{
		if (format[index] != '%')
		{
			total_characters += print_char(format[index]);
			index++;
		}
		else
			total_characters += process_specifiers(format, &index, args_list);
	}

	va_end(args_list);
	return (total_characters);
}

