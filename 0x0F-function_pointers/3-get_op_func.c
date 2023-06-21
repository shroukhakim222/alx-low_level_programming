#include "calc.h"
#include <stdio.h>

/**
 * get-op_func - function gets the operation
 * @s: operation symbol
 * @a: first number
 * @b: second number
 * Return: the function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] =
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
}
