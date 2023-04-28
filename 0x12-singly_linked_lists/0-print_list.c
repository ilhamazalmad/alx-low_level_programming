#include <stdio.h>
#include "lists.h"

/**
 * print_list - that prints all the elements of a list_t list
 * @h: first arg
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t sum = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		sum++;
	}
	return (sum);
}
