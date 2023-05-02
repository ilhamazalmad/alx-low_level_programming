#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: first param
 *
 * Return: the head node’s data
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	tmp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = tmp;
	return (n);
}
