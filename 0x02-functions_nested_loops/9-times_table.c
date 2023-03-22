#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int l;

	for (l = 0; l < 10; l++)
	{
		int c;

		for (c = 0; c < 10; c++)
		{
			int res = l * c;

			if (c == 0)
				printf("%d",  l * c);
			else
			{
				if (res < 10)
					printf(",  %d",  l * c);
				else
					printf(", %d",  l * c);
			}
		}
		putchar('\n');
	}
}
