#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c : first params
 *
 * Return: 1 if c is uppercase 0 if is not
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
