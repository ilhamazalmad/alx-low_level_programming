#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: first param
 * @accept: second param
 *
 * Return: the number of bytes in the initial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int size = 0;

	if (*s)
	{
		for (i = 0; i < strlen(s); i++)
		{
			if (strchr(accept, s[i]))
				size++;
			else if (size == 0)
				continue;
			else
				break;
		}
	}
	return (size);
}

