include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the contents of a struct dog.
 * @d: Pointer to the struct dog to be printed.
 *
 * Description: This function prints the elements of a struct dog
 * in the specified format. If an element is NULL, it prints "(nil)".
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
    }
}
