#include <stdio.h>
#include "main.h"

/**
 * print_chessboard -  prints the chessboard.
 * @a: pointer
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	j = 0;
	while (a[i][j] != '\0')
	{
		for (j = 0; j < 8; j++)
		{
			if (a[i][j] != ' ')
				_putchar(a[i][j]);
		}
		_putchar('\n');
		i++;
	}
}
