#include "main.h"

/**
 * compare - compare to char
 * @s: third param
 * @i: second param
 *
 * Return: int
 */

int compare(char *s, int i)
{
	int n = strlen(s) - i - 1;

	if (*(s + i) == *(s + n))
	{
		i++;
		n = strlen(s) - i - 1;
		if (i >= n)
			return (1);
		return (compare(s, i));
	}
	return (0);

}

/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not
 * @s: first param
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	int n = strlen(s);
	int i = 0;

	if (n == 0)
		return (1);
	if (n == 1)
		return (1);
	return (compare(s, i));
}
