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

	printf("Size of a char: %zu byte(s)\n", c);
	printf("Size of an int: %zu byte(s)\n", i);
	printf("Size of a long int: %zu  byte(s)\n", li);
	printf("Size of a long long int: %zu byte(s)\n", lli);
	printf("Size of a float: %zu byte(s)\n", f);
	return (0);
}
