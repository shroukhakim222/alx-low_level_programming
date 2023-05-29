#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer to string
 * Return: printed every other character
 */

void puts2(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
		len++;
	for (i = 0; i < len; )
	{
		_putchar(str[i]);
		i + 2;
	}
	_putchar('\n');
}
