#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: he converted number, or 0 if
 * there is one or more chars in the string b that is not 0
 * or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
			sum = sum * 2 + (b[i] - '0');
		else
			return (0);
		i++;
	}
	return (sum);
}
