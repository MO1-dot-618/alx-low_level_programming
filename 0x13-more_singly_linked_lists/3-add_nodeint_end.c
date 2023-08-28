#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of list
 * @head: pointer to head node
 * @n: int
 * Return: address of created node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *last = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
		if (*head == NULL)
		{
			*head = newNode;
			return (newNode);
		}
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = newNode;
	}
	return (newNode);
}
