#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: number to calculat its factorial
 *
 * Return: result
 */

int factorial(int n)
{
	if (n == 0)
		return (0);
	return (n * factorial(n - 1));
}
