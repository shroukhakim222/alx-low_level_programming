#include <stdio.h>
#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: n byte from src
 *
 * Return: pointer to new string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1, len2, i;
	int y = 0;

	while (dest[len1] != '\0')
		len1++;
	while (src[len2] != '\0')
		len2++;
	n = (len2 > n) ? n-1 : len2 -1;
	for (i = len1 - 1; i < n + len1; i++)
	{
		dest[i] = src[y];
		y++;
	}
	dest[i] = '\0';
	return (dest);
}
