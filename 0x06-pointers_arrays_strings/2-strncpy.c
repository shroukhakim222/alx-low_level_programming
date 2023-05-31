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
	int len1, len2, i;
	int y;

	while (dest[len1] != '\0')
		len1++;
	while (src[len2] != '\0')
		len2++;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		if (n > len2)
		{
			for (y = n - len2 + 1; y < n; y++)
				dest[y] = '\0';
		}
	}
	return (dest);
}
