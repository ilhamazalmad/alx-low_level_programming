#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first param
 * @s2: second param
 *
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i = 0;

	if (s1 == NULL && s2 == NULL)
		return ("");
	if (s1 == NULL)
	{
		s = malloc(strlen(s2) + 1);
		if (s == NULL)
			return (NULL);
		for (i = 0; i < strlen(s2) + 1; i++)
			s[i] = s2[i];
	}
	else if (s2 == NULL)
	{
		s = malloc(strlen(s1) + 1);
		if (s == NULL)
			return (NULL);
		for (i = 0; i < strlen(s1) + 1; i++)
			s[i] = s1[i];
	}
	else
	{
		s = malloc(strlen(s1) + strlen(s2) + 1);
		if (s == NULL)
			return (NULL);
		for (i = 0; i < strlen(s1); i++)
			s[i] = s1[i];
		for (i = strlen(s1); i < strlen(s1) + strlen(s2) + 1; i++)
			s[i] = s2[i - strlen(s1)];
	}
	return (s);
}
