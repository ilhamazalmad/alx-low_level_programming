#include <stdio.h>

/**
 * main - display the program name
 * @argc: first param
 * @argv: second param
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
