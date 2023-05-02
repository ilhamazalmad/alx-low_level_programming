#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: first param
 *
 * Return: void
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *list;
	size_t sum;

	if (h == NULL)
		return (0);
	while (*h)
	{
		list = (*h)->next;
		free(*h);
		*h = list;
		sum++;
	}
	*h = NULL;
	return (sum);
}

