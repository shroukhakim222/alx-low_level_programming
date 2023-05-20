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
			x = j + 1;
			for (y = i; y < 58;)
			{
				for (; x < 58; x++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(y);
					putchar(x);
					if (j == 56 && x == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				y++;
				x = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
