#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: character to initialize
 *
 * Return: pointer to char
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = (char*)malloc(sizeof(char) * size);
	if (p == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
