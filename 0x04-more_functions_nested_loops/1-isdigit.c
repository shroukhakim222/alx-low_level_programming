#include <stdio.h>
#include "main.h"

/**
 * _isdigit - check for digit
 * @c: function parameter to be checked
 *
 * Return: 1 is digit 0 is not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
