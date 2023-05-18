#include <stdio.h>

/**
 * main - print the size of various types
 *
 * Return: Always 0 success
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %ld byte(s)", c);
	printf("Size of an int: %ld byte(s)", i);
	printf("Size of a long int: %ld  byte(s)", li);
	printf("Size of a long long int: %ld byte(s)", lli);
	printf("Size of a float: %ld byte(s)", f);
	return (0);
}
