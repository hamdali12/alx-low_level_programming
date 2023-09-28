#include <stdio.h>

/**
 * _sqrt_recursion - Returns the natural square root of a number recursively.
 * @n: The number for which the square root is to be calculated.
 *
 * Return: The natural square root of 'n', or -1 if 'n' does not have a
 *         natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return -1;
	}

	if (n == 0 || n == 1)
	{
		return n;
	}

	return sqrt_recursive_helper(n, 1); // Call the recursive helper function
}

/**
 * _sqrt_recursive_helper - Recursive helper function to find the natural square root.
 * @n: The number for which the square root is to be calculated.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of 'n'.
 */
int sqrt_recursive_helper(int n, int g)
{
	if (guess * guess == n)
	{
		return guess;
	}

	if (guess * guess > n)
	{
		return -1;
	}

	return _sqrt_recursive_helper(n, guess + 1);
}
