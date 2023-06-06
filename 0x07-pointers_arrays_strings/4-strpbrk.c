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
	int i, j;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] >= '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (0);
}
