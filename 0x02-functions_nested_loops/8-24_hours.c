#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - print every hour in a aday
 *
 * Return: hours of the day
 */

void jack_bauer(void)
{
	int i, j, x, y;

	for (i = 48; i < 51; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i == 50 && j == 52)
				break;
			for (x = 48; x < 54; x++)
			{
				for (y = 48; y < 58; y++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(x);
					_putchar(y);
					_putchar('\n');
				}
			}
		}
	}
}
