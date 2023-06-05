#include <stdio.h>
#include "main.h"

/**
 * *_memcpy -  copies memory area.
 * @dest: pointer to first array
 * @src: pointer to second array
 * @n: number of bytes from the memory
 *
 * Return: pointer to changed dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
