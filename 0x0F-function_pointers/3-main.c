#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h> // Include this for exit

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*func)(int, int);
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	func = get_op_func(operator);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", func(num1, num2));

	return (0);
}
