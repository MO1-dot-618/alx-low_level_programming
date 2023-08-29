#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert_nodeint_at_index
 * @head: pointer to head node
 * @idx: index
 * @n: data
 * Return: sum of data
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = *head;
	listint_t *newNode;
	unsigned int i;

	newNode = malloc(sizeof(listint_t));

	if (idx == 0 && newNode != NULL)
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (i = 0; i < idx - 1; i++) 
	{
		if (node == NULL)
		{
			return (NULL);
		}
		node = node->next;
	}

	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = node->next;
		node->next = newNode;
	}
	return (newNode);
}
