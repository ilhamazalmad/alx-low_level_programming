#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit
 * @c : first params
 *
 * Return: 1 if c is a digit and 0 if is not
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}

