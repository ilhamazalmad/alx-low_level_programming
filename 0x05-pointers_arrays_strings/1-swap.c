#include "main.h"
#include <stdio.h>
/**
 * swap_int -  swaps the values of two integers
 *  @a : first param
 *  @b : second pram
 *
 *  Return : void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
