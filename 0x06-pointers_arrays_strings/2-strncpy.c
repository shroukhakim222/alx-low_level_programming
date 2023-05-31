#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - copies a string.
 * @dest: first sting
 * @src: second string
 * @n: number of byte of sceond string to copy
 *
 * Return: pointer to new string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	int len = 0;
	int y;

	while (src[len] != '\0')
		len++;
	y = (n > len) ? len : n;
	i = 0;
	while (dest[i] != '\0' && i < y)
	{
		dest[i] = src[i];
		i++;
	}
	if (n > len)
	{
		for (j = len; j < n; j++)
			dest[j] = '\0';
	}
	return (dest);
}
