#include <stdio.h>
#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @s: pointer to string
 *
 * Return: pointer to changed string
 */

char *string_toupper(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		i++;
	}
	return (s);
}
