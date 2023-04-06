#include "main.h"

/**
 * modulo - find the modulo of n and i
 * @n: first param
 * @i: second param
 *
 * Return: int
 */

int modulo(int n, int i)
{
	if ((n % i) == 0)
		return (0);
	if (++i < (n / 2))
		return (modulo(n, i++));
	return (1);
}

/**
 * is_prime_number -  returns 1 if n is a prime number otherwise return 0
 * @n: first param
 *
 * Return: int
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (modulo(n, i));
}
