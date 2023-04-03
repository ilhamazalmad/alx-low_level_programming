#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hellon";
	char *f;

	f = _strchr(s, 'n');
	if (f != NULL)
	{
		printf("the result: %s\n", f);
	}
	else
		printf("nulle\n");
	return (0);
}
