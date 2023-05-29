#include <stdio.h>
#include "main.h"

/**
 * rev_string - function reverse string
 * @s: string pointer
 * Return: reversed string
 */

void rev_string(char *s)
{
	int i, n;
	int len = 0;
	char temp;

	while (s[len] != '\0')
		len++;
	n = len - 1;
	for (i = 0; i < len; i++)
	{
		tmp = s[n];
		s[n] = s[i];
		s[i] = tmp;
		n--;
	}
}
