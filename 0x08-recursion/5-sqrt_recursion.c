#include "main.h"

int _act_sqrt_root(int n, int i);
/**
 * _sqrt_recursion - returns the natural
 * square root of a number
 * @n: number to be calculated
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_act_sqrt_root(n, 0));
}

/**
 * _act_sqrt_root - calculate the square root
 * @n: number to be calculated
 * @i: the resuult
 *
 * Return: square root
 */
int _act_sqrt_root(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_act_sqrt_root(n, i + 1));
}
