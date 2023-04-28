#include <stdio.h>
#include "lists.h"

/**
 * list_len - calcul the number of  elements of a list_t list
 * @h: first arg
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t sum = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		sum++;
	}
	return (sum);
}
