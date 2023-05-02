#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list starting with 0
 * @head: first param
 * @index: second param
 *
 * Return: nth node of a list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *list;
	unsigned int i;

	if (!head)
		return (NULL);
	if (index == 0)
		return (head);
	list = head;
	for (i = 1; i <= index; i++)
	{
		list = list->next;
		if (list == NULL)
			return (NULL);
	}
	return (list);
}
