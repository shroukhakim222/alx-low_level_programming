#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *_strstr - locates a substring
 * @haystack: pointer to string
 * @needle: pointer to second string
 *
 * Return: pointer to the beginning of the located substring
 * or null
 */

char *_strstr(char *haystack, char *needle)
{
	char *f;
	int i, j;
	int y = 0;

	i = 0;
	f = (char*)malloc(sizeof(char) * 100);
	while (haystack[i] != '\0')
	{
		for (j = 0; needle[j] != '\0';)
		{
			if (haystack[i] == needle[j])
			{
				f[y] = haystack[i];
				y++;
				j++;
			}
		}
		i++;
	}
	if (y == 0)
		return (NULL);
	return (f);
}
