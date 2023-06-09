#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: command count
 * @argv: command array
 *
 * Return: 1 if fail and 0 when success
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!(isdigit(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
