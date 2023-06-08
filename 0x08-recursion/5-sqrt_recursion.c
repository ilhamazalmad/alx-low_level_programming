#include "main.h"

/**
 * calcul_sqrt - find the sqrt of n
 * @n: first param
 * @i: second param
 *
 * Return: int
 */

int calcul_sqrt(int n, int i)
{
	if ((i * i) == n)
		return (i);
	if (++i <= (n / 2))
		return (calcul_sqrt(n, i++));
	return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: first param
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (calcul_sqrt(n, i));
}

