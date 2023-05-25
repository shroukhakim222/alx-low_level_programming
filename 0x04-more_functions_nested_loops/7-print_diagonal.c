#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line 
 * @n:  is the number of times the character \
 * 
 * Return: diagonal line
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (j != 0)
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
