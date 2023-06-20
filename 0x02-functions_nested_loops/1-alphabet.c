#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: 0 on successful execution
 */
int main()
{
	print_alphabet();
    	return 0;
}

/*
print alphabet function
*/
void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z') {
        _putchar(letter);
        letter++;
    }

    _putchar('\n');
}



