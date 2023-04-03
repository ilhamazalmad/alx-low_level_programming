#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: first param
 * @c: second param
 *
 * Return: the first occurrence of the character c or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int i;
	char *f = NULL;

	for (i = 0; i < sizeof(s); i++)
	{
		if (s[i] == c)
		{
			f = s + i - 1;
		}
	}
	return (f);
}
