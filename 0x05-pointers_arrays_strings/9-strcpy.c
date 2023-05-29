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
	int len2 = 0;
	int i;

	while (src[len2] != '\0')
		len2++;
	for (i = 0; i < len2; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
