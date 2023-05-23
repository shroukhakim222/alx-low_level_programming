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

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (j == 0)
			{
				_putchar(48);
				_putchar(',');
			}
			mul = i * j;
			fst = mul / 10;
			lst = mul % 10;
			if (fst == 0)
				_putchar(' ');
			else
			{
				_putchar(' ');
				_putchar(fst + 48);
				_putchar(lst + 48);
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
