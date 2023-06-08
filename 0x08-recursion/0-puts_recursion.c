#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: first param
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (strlen(s + i) == 0)
		_putchar('\n');
	else
	{
		_putchar(*(s + i));
		i++;
		_puts_recursion(s + i);
	}
}

