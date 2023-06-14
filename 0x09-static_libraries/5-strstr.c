#include "main.h"

/**
 * _strstr -  locates a substring
 * @haystack: first param
 * @needle: second param
 *
 * Return: pointer to the beginning of the substring or NULL if its not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	char *f = NULL;

	if (haystack == NULL)
		return (NULL);
	while (haystack != NULL  && (strlen(haystack) >= strlen(needle)))
	{
		if (haystack[i] == needle[i])
		{
			if (i == strlen(needle))
			{
				f = haystack;
				break;
			}
			else
				i++;
		}
		else
		{
			i = 0;
			haystack = haystack + 1;

		}
	}
		return (f);
}

