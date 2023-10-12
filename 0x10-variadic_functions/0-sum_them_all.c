#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Sum all its parameters.
 * @n: The number of arguments.
 * @...: The parameters to be summed.
 *
 * Return: The sum of the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}

	int sum = 0;
	va_list args;
	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
