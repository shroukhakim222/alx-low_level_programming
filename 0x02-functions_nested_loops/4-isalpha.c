#include <stdio.h>
#include "main.h"

/**
 *  _isalpha - check if the character is alphabet
 *  @c: function parameter
 *
 *  Return: 1 if true and 0 if else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
