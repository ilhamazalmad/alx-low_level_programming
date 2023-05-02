#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a list
 * @head : first param
 *
 * Return: the number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t sum = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		sum++;
	}
	return (sum);
}
