#include "main.h"

/**
 * main - Entry point
 *
 * printf a text
 * Return: Always 0
 */
int main(void)
{
	char text[] = "_putchar";
	int i;

	for (i = 0; i < (int)sizeof(text); i++)
		_putchar(text[i]);
	_putchar('\n');
	return (0);
}
