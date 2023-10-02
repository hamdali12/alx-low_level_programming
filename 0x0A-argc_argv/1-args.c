#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc - 1);

	for (i = 1; i < argc; i++)
	{
		printf("%d:\n", i, argv[i]);
	}

	return (0);
}
