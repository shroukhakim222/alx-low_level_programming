#include <stdio.h>
#include "main.h"

/**
 * _strlen - return the length of string
 * @s: pointer to string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
