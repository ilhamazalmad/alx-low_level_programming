#include "main.h"

/**
 * string_nconcat - contains s1, followed by the first n bytes of s2
 * @s1: first arg
 * @s2: second arg
 * @n: third arg
 *
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j = 0;

	if (strlen(s2) < n)
		n = strlen(s2);
	if (s2 == NULL && s1 == NULL)
	{
		str = malloc(1);
		if (str == NULL)
			return (NULL);
		str = '\0';
	}
	if (s2 == NULL)
	{
		str = malloc(sizeof(s1));
		if (str == NULL)
			return (NULL);
		str = s1;
	}
	else if (s1 == NULL)
	{
		str = malloc((n * sizeof(char)) + 1);
		if (str == NULL)
			return (NULL);
		for (i = 0; i < n; i++)
			str[i] = s2[i];
		str[n] = '\0';
	}
	else
	{
		str = malloc((sizeof(s1)) + (n * sizeof(char)));
		if (str == NULL)
			return (NULL);
		for (i = 0; i < strlen(s1); i++)
			str[i] = s1[i];
		for (i = strlen(s1); i < strlen(s1) + n; i++)
		{
			str[i] = s2[j];
			j++;
		}
		str[strlen(s1) + n] = '\0';
	}
	return (str);
}
