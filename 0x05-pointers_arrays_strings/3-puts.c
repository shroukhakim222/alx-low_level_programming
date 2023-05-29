#include <stdio.h>
#include "main.h"

/**
 * _puts - print string followed by new line
 * @str: pointer to string
 * Return: string followed by new line in stdout
 */

void _puts(char *str)
{
	int i, len;

	len = 0;
	while (str[len] != '\0')
		len++;
	for (i = 0; i <= len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
