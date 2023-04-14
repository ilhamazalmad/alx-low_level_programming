#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * isnumber - verifie the char if is number of not
 * @n: arg
 * Return: int
 */

int isnumber(char *n)
{
	int i = strlen(n);
	int isnum = (i > 0);

	while (i-- && isnum)
	{
		if (!(n[i] >= '0' && n[i] <= '9'))
			isnum = 0;
	}
	return (isnum);
}

/**
 * main - display the program name
 * @argc: first param
 * @argv: second param
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1 ; i < argc; i++)
	{
		if (!isnumber(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
