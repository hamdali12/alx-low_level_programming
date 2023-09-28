#include <stdio.h>


/**
 * is_prime_recursive - Helper function to check if 'n' is prime recursively.
 * @n: The integer to be checked.
 * @divisor: The current divisor to test.
 *
 * Return: 1 if 'n' is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}

	if (divisor == 1)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}


	return (is_prime_recursive(n, divisor - 1));
}

/**
 * is_prime_number - Checks if a given integer is a prime number.
 * @n: The integer to be checked.
 *
 * Return: 1 if 'n' is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (is_prime_recursive(n, n - 1));
}
