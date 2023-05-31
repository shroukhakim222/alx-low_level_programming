#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compare two string
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 when they are the same
 * -1 when first number lower scii value
 *  1 when first numberf  higher ascii value
 */

int _strcmp(char *s1, char *s2)
{
	int i, len, len1, len2;
	int sum = 0;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	len = (len1 > len2) ? len1 : len2;
	for (i = 0; i < len; i++)
	{
	}
}
