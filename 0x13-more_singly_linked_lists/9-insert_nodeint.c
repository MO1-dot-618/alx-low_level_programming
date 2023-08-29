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

	for (i = 0; i < idx - 1; i++)
	{
		node = node->next;
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = node->next;
		node->next = newNode;
	}
	return (newNode);
}
