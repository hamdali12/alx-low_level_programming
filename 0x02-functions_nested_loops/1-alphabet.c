#include "main.h"

void print_alphabet(void);
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
void print_alphabet(void) {
    char letter = 'a';

    // Print the alphabet using a loop
    while (letter <= 'z') {
        putchar(letter);
        letter++;
    }

    // Print a new line character
    putchar('\n');
}



