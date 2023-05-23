#include <stdio.h>
#include "main.h"

/**
 * times_table - print the time table
 *
 * Retuen: time table
 */

void times_table(void)
{
	int i, j;
	int mul;
	int fst, lst;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		_putchar(',');
		for (j = 1; j <= 9; j++)
		{
			mul = i * j;
			fst = mul / 10;
			lst = lst % 10;
			_putchar(' ');
			if (fst == 0)
				_putchar(' ');
			else
				_putchar(fst + '0');
			_putchar(lst + '0');
			if (i == 9 && j == 9)
				break;
			_putchar(',');
		}
		_putchar('\n');
	}
}
