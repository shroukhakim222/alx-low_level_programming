#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 when success and 1 when fail
 */

int main(int argc, char *argv[])
{
	int i;
	int count = 0;

	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	while (i - 25 >= 0)
	{
		i -= 25;
		count++;
	}
	while (i - 10 >= 0)
	{
		i -= 10;
		count++;
	}
	while (i - 5 >= 0)
	{
		i -= 5;
		count++;
	}
	while (i - 1 >= 0)
	{
		i -= 1;
		count++;
	}
	printf("%d\n", count);
	return (0);
}
