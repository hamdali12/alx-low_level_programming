#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog and initializes its attributes.
 * @name: Pointer to a string representing the dog's name.
 * @age: The age of the dog as a float.
 * @owner: Pointer to a string representing the dog's owner.
 *
 * Return: Pointer to the new dog, or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	char *name_copy, *owner_copy;

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	name_copy = strdup(name);
	if (name_copy == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	owner_copy = strdup(owner);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog_ptr);
		return (NULL);
	}

	new_dog_ptr->name = name_copy;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = owner_copy;

	return (new_dog_ptr);
}
