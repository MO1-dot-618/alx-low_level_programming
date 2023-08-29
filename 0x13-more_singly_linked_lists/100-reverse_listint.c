#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverse listint
 * @head: pointer to head node
 * Return: pointer to new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nextNextNode = (*head)->next;
	listint_t *nextNode;

	(*head)->next = NULL;
	while (nextNextNode != NULL)
	{
		nextNode = nextNextNode;
		nextNextNode = nextNextNode->next;
		nextNode->next = *head;
		*head = nextNode;
	}

	return (nextNode);
}
