#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Initializes a struct dog.
 * @d: Pointer to the struct dog to be initialized.
 * @name: Pointer to a string representing the dog's name.
 * @age: The age of the dog as a float.
 * @owner: Pointer to a string representing the dog's owner.
 *
 * Description: This function initializes a struct dog with the provided
 * values for name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
