#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *@c : the char to test if is lower
 *
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}

