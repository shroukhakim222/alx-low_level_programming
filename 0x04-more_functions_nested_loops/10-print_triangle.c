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
			y = size - i;
			for (j = 0; j < i; j++)
			{
				while (y > 0)
				{
					_putchar(' ');
					y--;
				}
				_putchar('#');
			}
			putchar('\n');
		}
	}
}
