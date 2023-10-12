#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	int num1;
	int num2;
	int (*func)(int, int)

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	char *operator = argv[2];

	func = get_op_func(operator);

	int result = func(num1, num2);

	printf("%d\n", result);
	return (0);
}
