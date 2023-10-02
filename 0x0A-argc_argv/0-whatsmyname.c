#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments (unused)
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0 && argv[0] != NULL)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
