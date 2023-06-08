#include "main.h"

int act_prim(int n, int i);

/**
 * is_prime_number - check the number if it is prime
 * @n: number to be checked
 *
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (act_prim(n, n - 1));
}

/**
 * act_prim - calculate how many number can be divided
 * by the number
 * @n: the number
 * @i: number to be divided by
 *
 * Return: number
 */

int act_prim(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (act_prim(n, i - 1));
}
