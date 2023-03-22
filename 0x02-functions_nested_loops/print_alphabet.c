#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 * @c: The alphabet to print
 *
 * Return: void.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
