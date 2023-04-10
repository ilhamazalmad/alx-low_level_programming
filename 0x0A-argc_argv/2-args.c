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
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
