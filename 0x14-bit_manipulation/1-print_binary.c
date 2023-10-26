#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int shift;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	for (shift = (sizeof(unsigned long int) * 8 - 1); shift >= 0; shift--)
	{
		if ((n >> shift) & 1)
			break;
	}

	for (; shift >= 0; shift--)
	{
		putchar((n >> shift) & 1 ? '1' : '0');
	}
}
