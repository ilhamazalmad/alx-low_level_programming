#include "main.h"

/**
 * factorial -  the factorial of a given number
 * @n: first param
 *
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

