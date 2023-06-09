#include "main.h"
#include <stdlib.h>

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
	int k = 0, l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			l++;
		}
	}
	l += ac;
	arg = malloc(sizeof(char) * l + 1);
	if (arg == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			arg[k] = av[i][j];
			k++;
		}
		if (arg[k] == '\0')
			arg[k++] = '\n';
	}
	return (arg);
}
