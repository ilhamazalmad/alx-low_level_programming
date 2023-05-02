#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h : first param
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t sum = 0;

	if (h == NULL)
	{
		printf("0\n");
		return (0);
	}
	while (h)
	{
		printf("%d\n", h->n);
		sum++;
		h = h->next;
	}
	return (sum);
}
