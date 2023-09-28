#include <stdio.h>

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number for which factorial is to be calculated.
 *
 * Return: The factorial of 'n', or -1 if 'n' is less than 0 (error).
 */
int factorial(int n)
{
    if (n < 0) // Check for an error condition (negative 'n')
    {
        return -1;
    }
    
    if (n == 0) // Base case: factorial of 0 is 1
    {
        return 1;
    }
    
    return n * factorial(n - 1); // Recursive calculation of factorial
}
