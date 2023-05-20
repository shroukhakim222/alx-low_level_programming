#include <stdio.h>

/**
 * main - print numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i, j, y, x;
	int iy;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 57; j++)
		{
			for (y = 48; y < 58; y++)
			{
				for (x = 48; x < 58; x++)
				{
					iy = j;
					while (y == 0 && iy >= 0)
					{
						x++;
						iy--;
					}
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(y);
					putchar(x);
					if (i == 57 && i == y && i == x)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
