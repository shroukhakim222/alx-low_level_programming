#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings.
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: pointer to newly allocated memory
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j = 0;
	int len1 = 0, len2 = 0;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	str = malloc(sizeof(char) * (len1 + len1 + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		str[j] = s1[i];
		j++;
	}
	for (i = 0; i < len2; i++)
	{
		str[j] = s2[i];
		j++;
	}
	return (str);
}
