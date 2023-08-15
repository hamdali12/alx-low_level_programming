#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @num: The number from which the last digit will be extracted
 *
 * Return: The value of the last digit
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
