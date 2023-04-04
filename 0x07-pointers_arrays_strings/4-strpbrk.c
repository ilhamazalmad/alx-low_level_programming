#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: first param
 * @accept: second param
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *f = NULL;

	if (s == NULL)
		return (NULL);
	for (i = 0; i < sizeof(s); i++)
	{
		for (j = 0; j < sizeof(accept); j++)
		{
			if (s[i] == accept[j])
			{
				f = s + i;
				break;
			}
		}
		if (f != NULL)
			break;
	}
	return (f);
}
