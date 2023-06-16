#include "main.h"

/**
 * array_range - creates an array of integers from min to max
 * @min: first arg
 * @max: second arg
 *
 * Return: int
 */

int *array_range(int min, int max)
{
	int *str;
	int j = 0;
	int i;

	if (min > max)
		return (NULL);
	str = malloc((max - min + 1) * sizeof(int));
	if (str == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		str[j] = i;
		j++;
	}
	return (str);
}

