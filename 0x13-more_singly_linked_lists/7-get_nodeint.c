#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - return nth node
 * @head: pointer to head node
 * @index: index of the node (int)
 * Return: node pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *node = head;

	while (node != NULL && n != index)
	{
		node = node->next;
		n++;
	}
	return (node);
}
