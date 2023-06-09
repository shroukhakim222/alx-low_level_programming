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
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);

}
