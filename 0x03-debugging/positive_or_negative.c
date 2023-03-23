#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative - test if a number is a positive of negative
 * @n : the number in param to test
 *
 * Return: void
 */
void positive_or_negative(int n)
{

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

}
