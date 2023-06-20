#include "main.h"
/**
 * main - Entry point of the program
 *
 * Return: 0 on successful execution
 */
void print_alphabet(void)
{
		char letter = 'a';

		while (letter <= 'z')
		{
				_putchar(letter);
				letter++;
		}
		_putchar('\n');
}
