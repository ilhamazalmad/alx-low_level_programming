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

	_putchar(*(s + i));
	if (strlen(s+i+1) == 0)
		_putchar('\n');
	else
	{
		i++;
		_puts_recursion(s + i);
	}
}
