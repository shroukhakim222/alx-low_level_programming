#include <stdio.h>
#include "main.h"

/**
 * _isupper - check if the character is upper
 * @c: function char to be tested
 *
 * Return: 1 when true & 0 when false
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
