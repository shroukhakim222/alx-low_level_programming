#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int is_digit(char *s);
int _strlen(char *s);

/**
 * main - two positive numbers.
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: result of multiplication
 */

int main(int argc, char *argv[])
{
	int i, len1, len2, len, carry, digit1, digit2, a = 0;
	char *s1, *s2;
	int *mul;

	s1 = argv[1];
	s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
	{
		printf("Error\n");
		exit(98);
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	mul = malloc(sizeof(int) * len);
	if (mul == NULL)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		mul[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += mul[len1 + len2 + 1] + (digit1 * digit2);
			mul[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
		{
			mul[len1 + len2 + 1] += carry;
		}
	}
	for (i = 0; i < len - 1; i++)
	{
		if (mul[i])
			a = 1;
		if(a)
			_putchar(mul[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(mul);
	return (0);
}

/**
 * is_digit - check if the number is digit
 * @s: number to be checked
 * Return: 0 (success) 1 (fail)
 */
int is_digit(char *s)
{
	int i, len;

	len = _strlen(s);
	for (i = 0; i < len; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
	}
	return (1);
}
/**
 * _strlen - return the length
 * @s: char to be calculated
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}
	return (len);
}
