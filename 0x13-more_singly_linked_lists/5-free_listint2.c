#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: first param
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *list;

	if (head == NULL)
		return;
	while (*head)
	{
		list = (*head)->next;
		free(*head);
		*head = list;
	}
	*head = NULL;
}
