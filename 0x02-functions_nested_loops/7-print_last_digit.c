#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: function parameter
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
		n *= -1;
	last = n % 10;
	_putchar(last + '0');
	return (last);
}
