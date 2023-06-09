#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string,
 * followed by a new line.
 * @s: pointer to string
 *
 * Return: void.
 */

void _puts_recursion(char *s)
{
	if (!(*s))
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
