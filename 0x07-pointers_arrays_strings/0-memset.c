#include "main.h"
#include <stdio.h>

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to array
 * @b: char to be added
 * @n: number of bytes
 *
 * Return: pointer to changed array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return(s);
}
