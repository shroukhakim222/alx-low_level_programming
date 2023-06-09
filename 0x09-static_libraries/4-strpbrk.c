#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to string to be scanned
 * @accept: pointer to string
 *
 * Return: pointer to the byte in s that matches one of the bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
