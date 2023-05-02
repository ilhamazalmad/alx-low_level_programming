#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: first param
 * @idx: second param
 * @n: thrid param
 *
 * Return: the list added
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *list;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int i;

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (!head)
		return (NULL);
	if (idx == 0)
	{
		new->next = (*head);
		*head = new;
		return (new);
	}

	list = (*head);
	for (i = 1; i < idx; i++)
	{
		list = list->next;
		if (list == NULL)
			return (NULL);
	}
	new->next = list->next;
	list->next = new;
	return (new);
}
