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
	if (n % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;
	for (i = 0; i < n; i++)
		_putchar(str[i]);
	_putchar('\n');
}
