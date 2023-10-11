#include "main.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a provided printing function.
 * @name: The name to be printed.
 * @f: A pointer to a function that prints the name.
 *
 * Description: This function takes a name and a function pointer `f`,
 * which is used to print the name using the specified printing function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
