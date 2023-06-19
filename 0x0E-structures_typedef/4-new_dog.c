#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Pointer to the name string.
 * @age: Age of the dog.
 * @owner: Pointer to the owner string.
 *
 * Return: Pointer to the newly created dog, or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL); /* Return NULL if memory allocation fails */

	newDog->name = malloc(strlen(name) + 1);
	newDog->owner = malloc(strlen(owner) + 1);

	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}

	strcpy(newDog->name, name);
	strcpy(newDog->owner, owner);
	newDog->age = age;

	return (newDog);
}
