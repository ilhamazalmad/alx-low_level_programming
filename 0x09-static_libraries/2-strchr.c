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

	if (s == NULL)
		return (NULL);
	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == c)
		{
			f = s + i;
			break;
		}
	}
	return (f);
}

