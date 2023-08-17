#include "main.h"

/**
 * print_diagonal - Draws a diagonal line of backslashes
 * @n: The number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n'); // Print a newline for n <= 0
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}


