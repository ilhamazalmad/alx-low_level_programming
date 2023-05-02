#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a list
 * @head: first pram
 * @index: second param
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *list, *tmp;
	unsigned int i;

	if (!head || !(*head))
		return (-1);
	list = (*head);
	if (index == 0)
	{
		*head = (*head)->next;
		free(list);
		return (1);
	}

	for (i = 1; i < index; i++)
	{
		list = list->next;
		if (list == NULL)
			return (-1);
	}

	if (list->next != NULL)
	{
		tmp = list->next;
		list->next = list->next->next;
		free(tmp);
		return (1);
	}
	else
		return (-1);
	return (1);
}
