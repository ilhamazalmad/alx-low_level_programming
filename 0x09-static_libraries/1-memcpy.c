#include "main.h"

/**
 * _memcpy -  function that copies memory area.
 * @dest: first param
 * @src: second param
 * @n: third param
 *
 * Return: pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
