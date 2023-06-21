#include "function_pointers.h"

/**
 * print_name - Prints a name using the provided function.
 * @name: Pointer to the name string.
 * @f: Pointer to the function to be used for printing.
 *
 * Return: None.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
