#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - Entry point of the program
 *
 * Return: 0 on successful execution
*/
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	/* your code goes there */
	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0", n, lastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastDigit);
	}


	printf("\n");


	return (0);
}
