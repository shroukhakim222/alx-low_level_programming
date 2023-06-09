#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: command count
 * @argv: command array
 *
 * Return: 0 when success 1 if fails
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
