#include <stdio.h>

/**
 * main - print numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i, j, y, x;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 57; j++)
		{
			for (y = 48; y < 58; y++)
			{
				for (x = i; x < 58; x++)
				{
					if (x == i)
						x++;
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(y);
					putchar(x);
					if (i != 57 && i != y && i != x)
					{
						putchar(',');
						putchar(' ');
					}
					else
						break;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
