#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strpbrk(s, f);
        printf("res 1:%s\n", t);
        t = _strpbrk("hellos,world", "ss");
        printf("res 2:%s\n", t);
        t = _strpbrk("fvz vzeze", "ss");
        printf("res 3:%s\n", t);
	return (0);
}
