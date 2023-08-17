#include "main.h"

void print_line(int n)
{
	int i;
	if (n <= 0)
	{
		_putchar('\n'); // Print a newline for n <= 0
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_'); // Print '_' n times
		}
		_putchar('\n'); // Print a newline after the line
	}
}
