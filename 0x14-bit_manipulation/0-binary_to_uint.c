#include <stdio.h>
#include <string.h>

/**
 * pow_num - pow of two numbers
 * @x: first param
 * @y: second param
 *
 * Return: the pow
 *
 */

int pow_num(int x, int y)
{
	int power = 1, i;

	for (i = 1; i <= y; ++i)
	{
		power = power * x;

	}
	return (power);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: first param
 *
 * Return: unsigned int or 0
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int size = strlen(b);
	int i = 0;

	if (b == NULL || !b || size == 0)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			sum += (int)pow_num(2, size - i - 1);
	}
	return (sum);
}
