#include "main.h"

/**
 * _pow_recursion - returns the value of x
 * raised to the power of y
 * @x: base number
 * @y: power number
 *
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	int res = 1;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	res *= x * _pow_recursion(x, y - 1);
	return (res);
}
