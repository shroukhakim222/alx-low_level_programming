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
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
