#include "main.h"
#include <stdio.h>

/**
 * *argstostr - concatenates all the arguments of program
 * @ac: number of argument
 * @av: pointer to 2d array
 *
 * Return: pointer to new char
 */

char *argstostr(int ac, char **av)
{
	char *arg;
	int i, j;
	int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	arg = malloc(sizeof(*av));
	if (arg == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != " "; j++)
		{
			arg[k] = av[i][j];
		}
		if (arg[k] == '\0')
			str[k++] = '\n';
	}
	return (str);
}
