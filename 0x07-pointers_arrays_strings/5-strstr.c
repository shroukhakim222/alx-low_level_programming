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
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0';)
		{
			if (haystack[i] == needle[j])
			{
				return (&haystack);
				j++;
			}
			if (needle[j + 1] == '\0')
				break;
		}
	}
}
