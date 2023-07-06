#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be converded
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i;
	unsigned long int k;

	for (i = 63; i >= 0; i--)
	{
		k = n >> i;
		if (k & 1)
		{
			putchar('1');
		}
		else
			putchar('0');
	}
}
