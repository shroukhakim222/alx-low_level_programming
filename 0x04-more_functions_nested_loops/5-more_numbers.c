#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 *
 * Return: numbers
 */

void more_numbers(void)
{
	int i, j, k;

	for (k = 0; k < 10; k++)
	{
		for (i = 48; i < 50; i++)
		{
			if (i == 50 && j == 52)
				break;
			for (j = 48; j < 58; j++)
			{
				if (i != 48)
					_putchar(i);
				_putchar(j);
			}
		}
		_putchar('\n');
	}
}
