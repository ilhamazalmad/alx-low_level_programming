#include <stdio.h>
#include <stdlib.h>

/**
 * main - display the program name
 * @argc: first param
 * @argv: second param
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", sum);
	return (0);
}
