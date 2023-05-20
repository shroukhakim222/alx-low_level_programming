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
		for (j = 48; j < 58; j++)
		{
			for (y = 48; y < 58; y++)
			{
				if (y == 48)
					x = j + 1;
				else
					x = 48;
				for (; x < 58; x++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(y);
					putchar(x);
					if (i == 57 && i == y && j == 56)
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
