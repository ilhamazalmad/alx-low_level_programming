#include "main.h"

/**
 * size  - contains s1, followed by the first n bytes of s2
 * @s2: second arg
 * @n: third arg
 *
 * Return: int
 */

unsigned int size(char *s2, unsigned int n)
{
	if (s2 != NULL && strlen(s2) < n)
		n = strlen(s2);
	return (n);

}

/**
 * concat - contains s1, followed by the first n bytes of s2
 * @str: zero param
 * @s1: first arg
 * @s2: second arg
 * @n: third arg
 *
 * Return: char
 */

char *concat(char *str, char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j = 0;

	if (s2 == NULL)
	{
		for (i = 0; i < strlen(s1); i++)
			str[i] = s1[i];
		str[strlen(s1)] = '\0';
	}
	else if (s1 == NULL)
	{
		for (i = 0; i < n; i++)
			str[i] = s2[i];
		str[n] = '\0';
	}
	else
	{
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

	n = size(s2, n);
	if (s2 == NULL && s1 == NULL)
	{
		str = malloc(sizeof(char));
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (s2 == NULL)
	{
		str = malloc((sizeof(s1)));
		if (str == NULL)
			return (NULL);
		str = concat(str, s1, s2, n);
	}
	else if (s1 == NULL)
	{
		str = malloc((n * sizeof(char)) + 1);
		if (str == NULL)
			return (NULL);
		str = concat(str, s1, s2, n);
	}
	else
	{
		str = malloc((sizeof(s1)) + (n * sizeof(char)));
		if (str == NULL)
			return (NULL);
		str = concat(str, s1, s2, n);
	}
	return (str);
}

