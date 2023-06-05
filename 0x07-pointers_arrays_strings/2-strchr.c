#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *_strchr -  locates a character in a string.
 * @s: pointer to string
 * @c: character to be checked
 *
 * Return: pointer to first occarance if character c
 */

char *_strchr(char *s, char c)
{
	char *f;
	int i = 0;
	int j = 0;

	f = (char *)malloc(1000 * sizeof(char));
	while (s[i] != c)
		i++;
	while (s[i] != '\0')
	{
		f[j] = s[i];
		i++;
		j++;
	}
	if (j == 0)
		return (NULL);
	else
		return (f);
}
