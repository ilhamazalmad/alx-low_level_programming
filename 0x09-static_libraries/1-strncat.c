#include "main.h"

/**
 * _strncat - concatenates two strings. with n bytes from src
 * @dest: fifrst param
 * @src: second param
 * @n: third param
 * Return: the concatenation
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}

