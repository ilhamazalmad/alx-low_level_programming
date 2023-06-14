#include "main.h"

/**
 * _islower - prints the alphabet, in lowercase
 *@c : the char to test if is lower
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}

