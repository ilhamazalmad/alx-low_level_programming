#include "main.h"

/**
 *jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour;

	for (hour = 0; hour < 24; hour++)
	{
		int minute;

		for (minute = 0; minute < 60; minute++)
			printf("%02d:%02d\n", hour, minute);
	}
}
