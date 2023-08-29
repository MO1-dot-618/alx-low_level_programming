#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - return sum of data
 * @head: pointer to head node
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int n = 0;
	listint_t *node = head;

	while (node != NULL)
	{
		n += node->n;
		node = node->next;
	}
	return (n);
}
