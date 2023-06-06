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
	char *f;
	int i, j;

	i = 0;
	f = (char *)malloc(sizeof(char) * 100);
	while (s[i] >= '\0')
	{
		for (j = 0; accept[j] >= '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		i++;
	}
	j = 0;
	while (s[i] >= '\0')
	{
		f[j] = s[i];
		j++;
		i++;
	}
	return (f);
}
