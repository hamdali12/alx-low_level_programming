#include <stdio.h>
#include <main.h>

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
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (sqrt_recursive_helper(n, 1));
}
