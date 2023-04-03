#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: first param
 * @c second param
 *
 * Return: the first occurrence of the character c or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int i;
	char f[sizeof(s)];

	for (i = 0; i < sizeof(s); i++)
	{
		if (s[i] == c)
		{
			unsigned int j = 0;
			unsigned int k = i;
			unsigned int newsize = sizeof(s) - i + 1;

			while (j < newsize)
			{
				f[j] = s[k];
				k++;
				j++;
			}
			break;
		}
	}
	if (f == NULL)
		return NULL;
	else
		return f;
}
