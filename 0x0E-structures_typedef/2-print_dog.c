#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a dog.
 * @d: Pointer to the struct dog to be printed.
 *
 * Return: None.
 *
 * Description: This function prints the name, age, and owner
 * of a dog. If any of the member pointers are NULL, it prints
 * "(nil)" instead.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
