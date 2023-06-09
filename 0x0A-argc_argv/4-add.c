#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

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

	if (argc == 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		if (!(atoi(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
