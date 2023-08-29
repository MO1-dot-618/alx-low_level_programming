#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - delete head and return its data
 * @head: pointer to head node
 * Return: head data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *index = *head;

	if (*head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	(*head) = (*head)->next;
	free(index);
	return (n);
}
