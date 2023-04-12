#include "main.h"

/**
 * argstostr -  concatenates all the arguments of your program
 * @ac: fisrte arg
 * @av: second arg
 *
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i, j;
	int width = 0, r = 0;

	if ((ac == 0) || (av == NULL))
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			width++;
		}
	}
	s = malloc(((ac + width) * sizeof(char)) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[r] = av[i][j];
			r++;
		}
	if (s[r] == '\0')
		s[r++] = '\n';
	}
	return (s);
}

