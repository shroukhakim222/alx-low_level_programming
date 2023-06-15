#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2
 *
 * Return: point to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *str;
	unsigned int j, i, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	n = (n > len2) ? len2 : n;
	str = malloc(sizeof(char) * (n + len1 + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
