#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of characters and initializes it with a char.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the created array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	char *arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (unsigned i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
