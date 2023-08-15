#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer for which the absolute value will be computed
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
    if (n < 0)
    {
        return (-n); // If n is negative, return its negation
    }
    else
    {
        return (n); // If n is non-negative, return n
    }
}
