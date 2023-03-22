#include "main.h"

/**
 * main - Entry point
 *
 * printf a text
 * Return: Always 0
 */
int main(void)
{
	char chars[] = "_putchar\n";
	unsigned int i;

	for (i = 0; i < sizeof(chars); i++)
		_putchar(chars[i]);
	return (0);
}
