#include <stdio.h>

/* betty style doc for function main goes there */
/**
 *main - Entry point of the program
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	for (d = 'a'; d <= 'f'; d++)
	{
		putchar(d);
	}

	putchar('\n');

	return (0);
}
