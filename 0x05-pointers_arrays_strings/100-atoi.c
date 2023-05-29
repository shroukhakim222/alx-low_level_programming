#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert string into integer
 * @s: pointer to string
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	double res = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
			i++;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + s[i] - '0';
			i++;
		}
		else
			i++;
	}
	return (sign * res);
}
