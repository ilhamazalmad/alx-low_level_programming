#include "main.h"
#include <stdio.h>
/**
 * print_rev - rints a string, in reverse
 * @s : first param
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length;
	int i;

	length = strlen(s);
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
