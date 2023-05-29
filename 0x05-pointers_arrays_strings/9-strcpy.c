#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - function add two string
 * @dest: first string
 * @src: second string
 *
 * Return: pointer to modified string
 */

char *_strcpy(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;
	int i;
	int y = 0;

	while (dest[len1] != '\0')
		len1++;
	while (src[len2] != '\0')
		len2++;
	for (i = len1 - 1; i < (len1 + len2); i++)
	{
		dest[i] = src[y];
		y++;
	}
	dest[i++] = '\0';
	return (dest);
}
