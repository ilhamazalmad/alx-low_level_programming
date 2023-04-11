#include "main.h"

/**
 * _strdup - returns pointer to allocate space in memory contains a copy of str
 * @str: first param
 *
 * Return: char
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);
	s = malloc(strlen(str) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < strlen(str) + 1; i++)
		s[i] = str[i];
	return (s);
}
