#include <stdio.h>
#include "main.h"

/**
 * _islower - check for lowercase character
 * @c: function parameter
 *
 * Return: 1 if true 0 if else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
