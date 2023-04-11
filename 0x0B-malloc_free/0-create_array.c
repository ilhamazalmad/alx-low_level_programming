#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it
 * @size: first param
 * @c: second param
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	s[0] = c;
	return (s);
}

