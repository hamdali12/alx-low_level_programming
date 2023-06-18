#include <stdio.h>

/* betty style doc for function main goes there */
/**
 *main - Entry point of the program
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}

	printf("\n");

	return (0);
}
