include <stdio.h>

/**
 * _sqrt_recursive_helper - Recursive helper function to find the natural square root.
 * @n: The number for which the square root is to be calculated.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of 'n'.
 */
int sqrt_recursive_helper(int n, int g)
{
	if (guess * g == n)
	{
		return (g);
	}

	if (guess * g > n)
	{
		return (-1);
	}

	return (sqrt_recursive_helper(n, g + 1));
}
