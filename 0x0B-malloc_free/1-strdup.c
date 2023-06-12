#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup -  returns a pointer to a newly allocated space
 * @str: pointer to array
 *
 * Return: pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;
	int size;

	size = sizeof(str);
	ptr = malloc(sizeof(char) * size + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}
