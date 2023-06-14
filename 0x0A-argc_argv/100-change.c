#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - display the program name
 * @argc: first param
 * @argv: second param
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i = 0, sum = 0;
	int coins[5] = {25, 10, 5, 2, 1};
	int nbr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	nbr = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		if (nbr >= coins[i])
		{
			sum += nbr / coins[i];
			if (nbr % coins[i] != 0)
				nbr = nbr % coins[i];
			else
				break;
		}
	}
	printf("%d\n", sum);
	return (0);
}

