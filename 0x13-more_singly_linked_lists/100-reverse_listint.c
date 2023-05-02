#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: first param
 *
 * Return: the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *list, *tmp = NULL;

	if (!head || !(*head))
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	list = (*head);
	while (list)
	{
		tmp = add_nodeint(&tmp, list->n);
		list = list->next;
	}
	*head = tmp;

	return (*head);
}
