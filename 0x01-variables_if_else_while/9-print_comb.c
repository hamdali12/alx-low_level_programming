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
		putchar('0' + number);

		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
