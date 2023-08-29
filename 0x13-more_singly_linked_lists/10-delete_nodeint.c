#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete_nodeint_at_index
 * @head: pointer to head node
 * @idx: index
 * Return: 1 (Success) or -1 (failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *node = *head, *to_dele;
	unsigned int i;

	if (idx == 0)
	{
		to_dele = *head;
		*head = (*head)->next;
		free(to_dele);
		return (1);
	}

	for (i = 0; i < idx - 1; i++) 
	{
		if (node == NULL)
		{
			return (-1);
		}
		node = node->next;
	}
	to_dele = node->next;
	node->next = node->next->next;
	free(to_dele);
	return (1);
}
