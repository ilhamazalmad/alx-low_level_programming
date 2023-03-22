#include "main.h"

/**
 * print_last_digit  - prints the last digit of a number.
 *@c : the number in argument
 *
 * Return: the last digit of c
 */
int print_last_digit(int c)
{
	int mod = abs(c) % 10;

	if (mod < 0)
		mod = -mod;
	_putchar(mod + '0');
	return (mod);
}
