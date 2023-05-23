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
		for (j = 0; j <= 9; j++)
		{
			mul = i * j;
			fst = mul / 10;
			lst = mul % 10;
			_putchar(fst + '0');
			_putchar(lst + '0');
			_putchar(',');
		}
		_putchar('\n');
	}
}
