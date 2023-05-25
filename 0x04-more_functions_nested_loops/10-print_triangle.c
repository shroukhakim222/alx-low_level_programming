#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: is the size of the triangle
 *
 * Return: triangle of size size
 */

void print_triangle(int size)
{
	int i, j, y;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			y = i;
			for (j = size; j > 0; j--)
			{
				while (y > 0)
				{
					_putchar('3');
					y--;
				}
				_putchar(' ');
			}
			putchar('\n');
		}
	}
}
