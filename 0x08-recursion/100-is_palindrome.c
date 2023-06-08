#include "main.h"

int len_recursion(char *s);
int true_palindrome(char *s, int len, int i);

/**
 * is_palindrome - check if the string is palindrom
 * @s: string to be checked
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int i;

	i = len_recursion(s);
	return (true_palindrome(s, i - 1, 0));
}

/**
 * len_recursion - calculate the len
 * @s: string
 * Return: length
 */
int len_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += len_recursion(s + 1);
	}
	return (len);
}

/**
 * true_recursion - check if string is palindrome
 * @s: string
 * @len: length of string
 * @i: increasing indes
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int true_palindrome(char *s, int len, int i)
{
	if (*(s + i) != s[len])
	{
		return (0);
	}
	if (*(s + i) == s[len] && (len == i || len == i + 1))
	{
		return (1);
	}
	return (true_palindrome(s, len - 1, i + 1));
}
