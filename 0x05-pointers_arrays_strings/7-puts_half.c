#include "main.h"

/**
 * puts_half - print half followed by new line
 * @str: pointer to string
 *
 * Return: printed half
 */

void puts_half(char *str)
{
	int i, n;
	int len = 0;

	while (str[len] != '\0')
		len++;
	n = (len - 1) / 2;
	for (i = n + 1; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
