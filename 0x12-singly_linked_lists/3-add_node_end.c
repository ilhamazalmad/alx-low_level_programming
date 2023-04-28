#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_node_end - add elemnt at the end of a linked list
 * @head: first param
 * @str: second param
 *
 * Return: the linked list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *list;

	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	list = *head;
	while (list->next)
		list = list->next;
	list->next = new;
	return (*head);
}
