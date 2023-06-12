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
	int size = 0;

	while (str[size] != '\0')
		size++;
	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(char) * size + 1);
	for (i = 0; i < size; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}
